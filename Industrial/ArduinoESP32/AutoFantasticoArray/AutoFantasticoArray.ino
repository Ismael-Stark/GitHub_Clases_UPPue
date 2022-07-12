int led[10] = {21,19,18,5,17,16,4,2,12,15};
int boton1 = 23;
int boton2 = 22;
int tiempo = 50; //tiempo de 50 mili segundos

void leer_boton(){
  int b1 = digitalRead(boton1);
  int b2 = digitalRead(boton2);

  if(b1 == 0){//mas lento
    tiempo += 50;
  }

  if(b2 == 0){//mas rapido
    tiempo -= 50;
    if (tiempo<=0){
      tiempo = 10;
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  for(int i =0; i<10;i++){
    pinMode(led[i],OUTPUT);
  }
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i =0; i<10;i++){
    digitalWrite(led[i],HIGH);
    leer_boton();
    delay(tiempo);
    digitalWrite(led[i],LOW);
    delay(tiempo);
  }

  for(int i =9; i>=0;i--){
    digitalWrite(led[i],HIGH);
    leer_boton();
    delay(tiempo);
    digitalWrite(led[i],LOW);
    delay(tiempo);
  }
}
