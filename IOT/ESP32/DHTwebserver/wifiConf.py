import network
import time
import fail as f


ssid = 'Electronica_IOT_2022'
password = 'Elect_IOT_2022'
miIP = '192.168.1.70'
miMask = '255.255.255.0'
miIProuter = '192.168.1.1'
miDNS = '8.8.8.8'

def wifi_init():
    global wifi
    wifi = network.WLAN(network.STA_IF)
    wifi.active(True)
    wifi.disconnect()
    wifi.ifconfig((miIP, miMask,miIProuter,miDNS)) #wifi.ifconfig(('192.168.1.89','255.255.255.0','192.168.1.1','8.8.8.8'))
    wifi.connect(ssid,password)
    if not wifi.isconnected():
        print('connecting..')
        timeout = 0
        while (not wifi.isconnected() and timeout < 10):
            #led.value(not led.value())
            print(10 - timeout)
            timeout = timeout + 1
            time.sleep(1) 
    if(wifi.isconnected()):
        print('connected')
        print(wifi.ifconfig())
    else:
        print('not connected')
        f.restart_and_reconnect()