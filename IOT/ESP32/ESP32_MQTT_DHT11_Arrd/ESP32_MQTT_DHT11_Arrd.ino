
#include <WiFi.h>
//#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>
//#include <stdio.h>

#define DHTTYPE DHT11
//#define dht1_dpin D1//esp8266
#define dht1_dpin 15//esp32
DHT dht(dht1_dpin, DHTTYPE);

// Replace the next variables with your SSID/Password combination
const char* ssid = "UPPue-WiFi";
const char* password = "";

// Add your MQTT Broker IP address, example: mosquitto_sub -t test -h 192.168.68.42
const char* mqtt_server = "52.28.123.232";
//const char* mqtt_server =  "broker.hivemq.com";

//topic para publicar
#define _topic "UPPue/TST/ejemplo1"
#define _pub "UPPue/TST/pub"
#define _cliente "Ismael"
WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[100];
int value = 0;


float temperature = 0;
float humidity = 0;
int contador=0;
// LED Pin
const int ledPin = 4;

void setup() {
  Serial.begin(115200);
  // default settings
  // (you can also pass in a Wire library object like &Wire2)
  //status = bme.begin();  
  
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  dht.begin();
  pinMode(ledPin, OUTPUT);
}

void setup_wifi() {
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void callback(char* topic, byte* message, unsigned int length) {
  Serial.print("Message arrived on topic: ");
  Serial.print(topic);
  Serial.print(". Message: ");
  String messageTemp;
  
  for (int i = 0; i < length; i++) {
    Serial.print((char)message[i]);
    messageTemp += (char)message[i];
  }
  Serial.println();

  // Feel free to add more if statements to control more GPIOs with MQTT

  // If a message is received on the topic esp32/output, you check if the message is either "on" or "off". 
  // Changes the output state according to the message
  if (String(topic) == _pub) {
    Serial.print("Changing output to ");
    if(messageTemp == "on"){
      Serial.println("on");
      digitalWrite(ledPin, HIGH);
    }
    else if(messageTemp == "off"){
      Serial.println("off");
      digitalWrite(ledPin, LOW);
    }
  }
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect(_cliente)) {
      Serial.println("connected");
      // Subscribe
      client.subscribe("test");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}
void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  long now = millis();
  if (now - lastMsg > 5000) {
    lastMsg = now;
    
    // Temperature in Celsius
    //temperature = 45;
    temperature = dht.readTemperature();
    //humidity = 60;
    humidity = dht.readHumidity();
    char buffer_mqtt[100];

    // Uncomment the next line to set temperature in Fahrenheit 
    // (and comment the previous temperature line)
    //temperature = 1.8 * bme.readTemperature() + 32; // Temperature in Fahrenheit
    
    // Convert the value to a char array
    char tempString[8];
    dtostrf(temperature, 1, 2, tempString);
    Serial.print("Temperature: ");
    Serial.println(tempString);
    //client.publish(_topic, tempString);
    // Convert the value to a char array
    char humString[8];
    dtostrf(humidity, 1, 2, humString);
    Serial.print("Humidity: ");
    Serial.println(humString);
    //client.publish(_topic, humString);
    //sprintf(buffer_mqtt,"{\"id\":\"ismael\",\"Temperatura\":\"%s\",\"humedad\":\"%s\",\"cont\":\"%d\"}",tempString,humString,contador++);
    sprintf(buffer_mqtt,"{\"Time\":\"2023-07-10T12:55:19\",\"id\":\"ismael\",\"Temperatura\":\"%s\",\"humedad\":%s,\"cont\":\"%d\"}",tempString,humString,contador++);
    Serial.println(buffer_mqtt);
    client.publish(_topic, buffer_mqtt);

    //printf("{\"temperatura\":20,\"humedad\": 40}");
  }
}