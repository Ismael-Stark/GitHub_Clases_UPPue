
float    valor;                                    //lectura de temperatura
uint16_t control;                                  //valor del PWM
float    a,b,c;                                    //constantes del PID
float    temp_limit;                               //temperatura a alcanzar
float    rT,eT,iT,dT,yT,uT,iT0,eT0,iT_1,eT_1;      //variables de ecuaciones            
float    limC_Max,limC_Min;                        //límites máximo y mínimo de control.


//----------------inicialización variables PID
void pid_init(){
   limC_Min=0.0;
   limC_Max=300.0;
   iT_1=0.0;
   eT_1=0.0;
   a=0.1243;                     //constantes del PID 
   b=0.0062;
   c=0.6215;
   temp_limit=100.0;          //Temperatura a alcanzar 
}
