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

led=Pin(4,Pin.OUT)# Onboard FlashLED on Pin 4 of ESP32

ssid = 'Electronica_IOT_2022'
password = 'Elect_IOT'
##mqtt_server = 'broker.hivemq.com'
mqtt_server = '192.168.1.9'#ip local de las clases, puede cambiar en cada clase

#client_id = ubinascii.hexlify(machine.unique_id())
client_id = bytes('client_'+'1ISR74321', 'utf-8') # Just a random client ID
topic_sub = b'UPPue/IET/TST'
topic_pub = b'UPPue/IET/TST'

def connect_wifi():##funcion que se llama desde la linea 46
    wifi = network.WLAN(network.STA_IF)
    wifi.active(True)
    wifi.disconnect()
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
    if topic == b'esp32/output':
        if  msg == b'true':
            led.value(0)
        if msg == b'false':
            led.value(1)

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
message_interval = 5
counter = 0

while True:
    try:
        client.check_msg()
        #client.wait_msg()
        if (time.time() - last_message) > message_interval:
            msg = b'Hello #%d' % counter
            client.publish(topic_pub, msg)
            print(msg)
            last_message = time.time()
            counter += 1
    except OSError as e:
        restart_and_reconnect()

