/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  


#define spi_miso  SoftSPI_SDI
#define spi_clock  SoftSPI_CLK
#define spi_mosi  SoftSPI_SDO
#define spi_CS    MFRC522_CS 

#define spi_miso_Direction  SoftSPI_SDI_Direction
#define spi_clock_Direction  SoftSPI_CLK_Direction
#define spi_mosi_Direction  SoftSPI_SDO_Direction
#define spi_CS_Direction  SoftSPI_SDI_Direction 


void Soft_SPI_Init()
{
//configura pines a usar como spi;
   spi_mosi_Direction=0;
   spi_clock_Direction=0;
   spi_CS_Direction=0;
  spi_miso_Direction=1;

   spi_clock=0;
  spi_CS=0;
  spi_mosi=0;
  spi_CS = 0;

}


unsigned char  Soft_SPI_Read()
{
  unsigned char cont_s= 0;
  unsigned char dato_ = 0;

  for(cont_s= 0; cont_s < 8; cont_s++)
  {
      dato_ <<= 1;
      spi_clock = 1;
      __delay_us(10);   //retardo de lectura

      if(spi_miso != 0)
      {
        dato_ |= 1;
      }
      spi_clock = 0;
      __delay_us(10);
  }
  return dato_;
}

void Soft_SPI_Write(unsigned char dato_)
{
  unsigned char cont_s= 0;

  for(cont_s = 0;cont_s < 8; cont_s++)
  {

    if((dato_ & 0x80) != 0) spi_mosi = 1;  //sino termina rotacion coloca un uno sino un cero
    else    spi_mosi = 0;
    dato_ <<= 1;  //vota
    //genera un pulso del reloj
    spi_clock = 1;
    __delay_us(10);
    spi_clock = 0;
    __delay_us(10);
  }
}




// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

