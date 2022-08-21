
#include "mcc_generated_files/system/system.h"

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        if(!SW_GetValue()==1){
            LED4_SetHigh();
        }else{
            LED4_SetLow();
        }
    }    
}