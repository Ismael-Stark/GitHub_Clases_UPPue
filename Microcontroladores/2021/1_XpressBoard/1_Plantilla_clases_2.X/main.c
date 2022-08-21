/**
 * Palantilla para clases XD
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
//#include "dht11.h"
#include "LCD_i2c.h"
#include <string.h>
#include <stdio.h>
#include <xc8debug.h>
#include "Config.h"

#define delay_ms(x) __delay_ms(x)
#define delay_us(x) __delay_us(x)
#define address 0b0111000
/*
                         Main application
 */

void main(void)
{
    
    
    
    // initialize the device
    SYSTEM_Initialize();
   
    //dht11_init();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    lcd_init();
    lcd_gotoxy(1,2); //columna,fila
    lcd_puts("Hola");
    while (1)
    {

        
//        temph = I2C1_Read1ByteRegister(address, 0x00);
//        templ = I2C1_Read1ByteRegister(address, 0x02);
//        templ >>= 6;
//        printf("temperatura placa: %d.%d\n", temph,templ);
//        dht11_read(&t,&h);
//        
//        if(GlobalErr != 0){
//            printf("Error\n");
//        }else{
//            printf("Clase:Progra\nla temperatura es: %i\ny la humedad es:%i\n\n",t,h);
//        }
//        __delay_ms(1000);
        
        /*if (PIR3bits.RCIF == 1){
            do{
                c = getch();//polling getch() es una funcion bloqueante
                if (c != 13){
                    buffer[i] = c;
                    i++;
                }            
            }while(c!=13);
            buffer[i++] = '\0';
            i=0;
            PIR3bits.RCIF = 0;
            PIE3bits.RCIE = 0;
        }*/ 
        if(strstr(buffer,"$ld1on") ){
            LATAbits.LATA0 = 1; 
        }else if(strstr(buffer,"$ld1off") ){
            LATAbits.LATA0 = 0; 
        }else if(strstr(buffer,"$ld2on") ){
            LATAbits.LATA1 = 1; 
        }else if(strstr(buffer,"$ld2off") ){
            LATAbits.LATA1 = 0; 
        }else if(strstr(buffer,"$ld3on") ){
            LATAbits.LATA2 = 1; 
        }else if(strstr(buffer,"$ld3off") ){
            LATAbits.LATA2 = 0; 
        }else if(strstr(buffer,"$ld4on") ){
            LATAbits.LATA3 = 1; 
        }else if(strstr(buffer,"$ld4off") ){
            LATAbits.LATA3 = 0; 
        }
        
        if(strstr(buffer,"$P") ){
            do{
                buffer2[j-2] = buffer[j];
                j++;
            }while(buffer[j] != '\0');
            buffer2[j] = '\0';
            j=2;
            duty = atoi(buffer2);
            PWM5_LoadDutyValue(duty);
        }
        
        /*if(strstr(buffer,"$L1") ){
            do{
                buffer2[j-4] = buffer[j];
                j++;
            }while(buffer[j] != '\0');
            buffer2[j] = '\0';
            j=4;
            
            lcd_gotoxy(1,1); //columna,fila
            lcd_puts(buffer2);
        }
        
        if(strstr(buffer,"$L2") ){
            do{
                buffer3[k-4] = buffer[k];
                k++;
            }while(buffer[k] != '\0');
            buffer3[k]='\0';
            k=4;
            lcd_gotoxy(1,2); //columna,fila
            lcd_puts(buffer3);
        }*/
        //isspace
                
        
        //LATAbits.LATA0 = !LATAbits.LATA0;
        //delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/