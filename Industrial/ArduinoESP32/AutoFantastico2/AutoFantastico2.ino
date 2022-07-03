int boton = 23;
int boton2 = 22;
int numeroLeds = 9;
int led[9] = {21,19,18,5,17,16,4,2,15}; //Vector
int tiempo = 50; //tiempo de 50 mili segundos

void leerboton(){
  int leer1 = digitalRead(boton);//hacer mas lento el parpadeo
  if(leer1 ==0){
    tiempo += 50;
  }
  int leer2 = digitalRead(boton2);//hacer parpdeo mas rapido
  if(leer2 ==0){
    tiempo -= 50;
    if (tiempo <50){//evitar que tiempo valga 0 o menor a cero
      tiempo = 50;
    }
  }  
}

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<= numeroLeds; i++){
    pinMode(led[i],OUTPUT);
  }
  pinMode(boton,INPUT);
  pinMode(boton2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<= numeroLeds; i++){
    digitalWrite(led[i],HIGH);
    delay(tiempo);
    leerboton();
    digitalWrite(led[i],LOW);
    delay(tiempo);
  }
  for(int i=9; i>= 0; i--){
    digitalWrite(led[i],HIGH);
    delay(tiempo);
    leerboton();
    digitalWrite(led[i],LOW);
    delay(tiempo);
  }
}
