int led1 = 21; //LED1 conectado al GPIO 21
int led2 = 19;
int led3 = 18;
int led4 = 5;
int led5 = 17;
int led6 = 16;
int led7 = 4;
int led8 = 2;
int led9 = 15;//led9 conectado al GPIO 15

int tiempo = 50; //tiempo de 50 mili segundos

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(led9,LOW);
  digitalWrite(led1,HIGH);
  delay(tiempo);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(tiempo);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(tiempo);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(tiempo);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(tiempo);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  delay(tiempo);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);
  delay(tiempo);
  digitalWrite(led8,LOW);
  digitalWrite(led9,HIGH);
  delay(tiempo);
}
