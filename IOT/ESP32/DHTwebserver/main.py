try:
  import usocket as socket
except:
  import socket
import network
from machine import Pin
import dht
import time
import esp
esp.osdebug(None)
import gc
gc.collect()
import wifiConf
#import webPage as wPage
import fail as f


#variables
global temp, hum


#E/S
led=Pin(2,Pin.OUT)                          # Onboard LED on Pin 2 of ESP32
#dht_pin = dht.DHT22(Pin(16))  # Comment it if you are using DHT11 and uncomment the next line
dht_pin = dht.DHT11(Pin(16)) # Uncomment it if you are using DHT11 and comment the above line


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

def web_page():
    html = """<html><head>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style>
    body {
      padding: 20px;
      margin: auto;
      width: 50%;
      text-align: center;
    }
    .progress { background-color: #F5F5F5; }
    .progress.vertical {
      position: relative;
      width: 25%;
      height: 60%;
      display: inline-block;
      margin: 20px;
    }
    .progress.vertical > .progress-bar {
      width: 100% !important;
      position: absolute;bottom: 0;
    }
    .progress-bar { background: linear-gradient(to top, hsl(352, 51%, 62%) 0%, #f12711 100%); }
    .progress-bar-hum { background: linear-gradient(to top, #9CECFB 0%, hsl(256, 100%, 51%) 50%, hsl(217, 94%, 20%) 100%); }
    .progress-bar-temp { background: linear-gradient(to top, #9CECFB 0%, hsl(256, 100%, 51%) 50%, hsl(217, 94%, 20%) 100%); }
    p {
      position: absolute;
      font-size: 1.5rem;
      top: 50%;
      left: 50%;
      transform: translate(-50%, -50%);
      z-index: 5;
    }
  </style>
</head>
<script type="text/javascript">
       setTimeout(function(){ location.reload(1);}, 15000);
    </script>
<body>
  <h1>MicroPython esp32 DHT11/DHT22 Web Server</h1>
  <div class="progress vertical">
    <p style="color:#0800fe;">"""+str(temp)+"""&deg;C<p>
    <div role="progressbar" style="height: """+str(temp)+"""%;" class="progress-bar progress-bar-temp, "></div>
  </div>
  <div class="progress vertical">
    <p style="color:#ff0000;">"""+str(hum)+"""%</p>
    <div role="progressbar" style="height: """+str(hum)+"""%;" class="progress-bar progress-bar-hum"></div>
  </div>
</body></html>"""
    return html #fin Pagina Web

wifiConf.wifi_init()
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(('', 80))
s.listen(5)

while True:
    try:
        conn, addr = s.accept()
        print('\nGot a connection from %s' % str(addr))
        conn.recv(1024)
        #request = conn.recv(1024)
        #print('\nContent = %s' % str(request))
        #sensor_readings = read_dht()
        #print(sensor_readings) ##imprime nada
        read_dht()
        response = web_page()#se manda a llamar la pagina WEB
        conn.send('HTTP/1.1 200 OK\n')
        conn.send('Content-Type: text/html\n')
        conn.send('Connection: close\n\n')
        conn.sendall(response)
        conn.close()
    except OSError as e:
        print('Failed to Webpage.')
        #f.restart_and_reconnect()