
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(23, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int boton = digitalRead(23);
  if (!boton){
    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  }else{
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  }
  delay(10);                       // wait for a second
}
