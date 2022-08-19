#INT_EXT
void  EXT_isr(void) 
{
   set_timer5(timer);
   //output_bit(triac,0);
   //output_toggle(triac);
   if (timer > 65530){
      output_bit(triac,1);
   }else{
      output_bit(triac,0);
   }
}

#INT_TIMER5
void  TIMER5_isr(void) 
{
   //set_timer5(0);
   //output_bit(triac,1);
   //output_toggle(triac);
   
   if (timer <= 150){
      output_bit(triac,0);
   }else{
      output_bit(triac,1);
   }

}


float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
