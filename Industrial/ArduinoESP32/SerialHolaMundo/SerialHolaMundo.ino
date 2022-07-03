int contador;
void setup() {
  Serial.begin(115200);
  pinMode(23,INPUT);
}

void loop() {  
  //Serial.println("hola mundo");
  Serial.print("hola mundo");
  Serial.println(contador++);
  if (digitalRead(23)==0){
    Serial.println("boton presionado");
  }
  delay(500);

}
