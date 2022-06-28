
void setup() {//aqui se declaran E/S
  pinMode(2, OUTPUT);
}

void loop() {//aqui va el programa
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
}
