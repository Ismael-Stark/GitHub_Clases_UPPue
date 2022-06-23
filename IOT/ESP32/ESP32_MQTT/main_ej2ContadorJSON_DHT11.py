# Complete project details at https://RandomNerdTutorials.com
from machine import Pin
import machine
import network
import time
#from umqttsimple import MQTTClient
from umqtt.robust import MQTTClient
import sys
import ubinascii  #para llamar el id unico de la ESP
import esp
esp.osdebug(None)
import dht

#variables
global temp, hum

#E/S
led=Pin(4,Pin.OUT)# Onboard FlashLED on Pin 4 of ESP32
dht_pin = dht.DHT11(Pin(16)) # Uncomment it if you are using DHT11 and comment the above line


ssid = 'Electronica_IOT_2022'
password = 'Elect_IOT'
#miIP = '192.168.1.70'
#miMask = '255.255.255.0'
#miIProuter = '192.168.1.1'
#miDNS = '8.8.8.8'
##mqtt_server = 'broker.hivemq.com'
mqtt_server = '192.168.1.5'#ip local de las clases, puede cambiar en cada clase


#client_id = ubinascii.hexlify(machine.unique_id())
client_id = bytes('client_'+'1ISR74321', 'utf-8') # Just a random client ID
topic_sub = b'UPPue/IET/TST/esp'
topic_pub = b'UPPue/IET/TST'

def connect_wifi():##funcion que se llama desde la linea 46
    wifi = network.WLAN(network.STA_IF)
    wifi.active(True)
    wifi.disconnect()
    #wifi.ifconfig((miIP, miMask,miIProuter,miDNS)) #wifi.ifconfig(('192.168.1.89','255.255.255.0','192.168.1.1','8.8.8.8'))
    wifi.connect(ssid,password)
    if not wifi.isconnected():
        print('connecting..')
        timeout = 0
        while (not wifi.isconnected() and timeout < 10):
            led.value(not led.value())
            print(10 - timeout)
            timeout = timeout + 1
            time.sleep(1) 
    if(wifi.isconnected()):
        print('connected')
        print(wifi.ifconfig())
        led.value(0)
    else:
        print('not connected')
        sys.exit()

def sub_cb(topic, msg):
    print((topic, msg))
    if topic == b'UPPue/IET/TST/esp':
        if  msg == b'on':
            led.value(1)
        if msg == b'off':
            led.value(0)

def connect_and_subscribe():
    global client_id, mqtt_server, topic_sub
    print(client_id,' ', mqtt_server,' ', topic_sub)
    client = MQTTClient(client_id=client_id, 
                    server=mqtt_server,
                    keepalive=60)
    client.set_callback(sub_cb)
    client.connect()
    client.subscribe(topic_sub)
    print('')
    print('Connected to %s MQTT broker, subscribed to %s topic' % (mqtt_server, topic_sub))
    return client

def restart_and_reconnect():
    print('')
    print('Failed to connect to MQTT broker. Reconnecting...')
    time.sleep(10)
    machine.reset()
    
def read_dht():
    global temp, hum
    temp = hum = 0
    try:
        dht_pin.measure()
        temp = dht_pin.temperature()
        hum = dht_pin.humidity()
        #temp_f = temp * (9/5) + 32.0
        print('\nTemperatura: %3.1f C' %temp)
        #print('Temperature: %3.1f F' %temp_f)
        print('Humedad: %3.1f %% \n' %hum)
    except OSError as e:
        print('Failed to read sensor.')


##aqui empieza el programa
connect_wifi() # Connecting to WiFi Router

#client = MQTTClient(client_id,mqtt_server,user=USERNAME,password=IO_KEY,ssl=False)
try:
    #client.connect()
    client = connect_and_subscribe()
except Exception as e:
    print('')
    print('could not connect to MQTT server {}{}'.format(type(e).__name__, e))
    restart_and_reconnect()
    #sys.exit()

last_message = 0
message_interval = 2
counter = 0

while True:
    try:
        client.check_msg()
        #client.wait_msg()
        if (time.time() - last_message) > message_interval:
            read_dht()
            msg = b'{"id":"Ismael S. R.","temp":"%d"' %temp
            msg = msg+',"hum":"%d"}'%hum
            client.publish(topic_pub, msg)
            #print(msg)
            last_message = time.time()
            counter += 1
    except OSError as e:
        restart_and_reconnect()


