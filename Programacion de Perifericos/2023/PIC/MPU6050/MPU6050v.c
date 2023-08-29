//#include "MPU6050regv.h"
#include "MPU6050reg.h"
#include "Ic2devlib.c"
void MPU6050_Test(){
   int8 data=0;
   data=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_WHO_AM_I);

   if(data == 0x68){
      printf("Test Passed,\nMPU Addr: 0x%x\n", data);
   }else{
      printf("ERROR: I2C Read\nTest Failed\n, Stopping");
      //while(true){}   
   }
}

void MPU6050_TEMP(float &t){
   int8 x1,x2;
   signed int16 temp;
   x1 = LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_TEMP_OUT_H);
   x2 = LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_TEMP_OUT_L);
   //delay_ms(1);

   temp = make16(x1,x2);
   t= ((float)temp/340) + 36.53;
   
}

void MPU6050_GYRO(int16 &x,int16 &y,int16 &z){
   int8 x1,x2,y1,y2,z1,z2;
   //x1=x2=y1=y2=z1=z2=0;
   
   x1=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_GYRO_XOUT_H);
   x2=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_GYRO_XOUT_L);
   y1=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_GYRO_YOUT_H);
   y2=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_GYRO_YOUT_L);
   z1=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_GYRO_ZOUT_H);
   z2=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_GYRO_ZOUT_L);
   
   x = make16(x1,x2);
   y = make16(y1,y2);
   z = make16(z1,z2);
   
}

void MPU6050_ACCEL(int16 &x,int16 &y,int16 &z){
   int8 x1,x2,y1,y2,z1,z2;
   //x1=x2=y1=y2=z1=z2=0;
   
   x1=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_ACCEL_XOUT_H);
   x2=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_ACCEL_XOUT_L);
   y1=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_ACCEL_YOUT_H);
   y2=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_ACCEL_YOUT_L);
   z1=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_ACCEL_ZOUT_H);
   z2=LDByteReadI2C(MPU6050_ADDRESS,MPU6050_RA_ACCEL_ZOUT_L);
     
   x = make16(x1,x2);
   y = make16(y1,y2);
   z = make16(z1,z2);

}


/*Void Setup_MPU6050(){
   int8 sleep;
   //sleep=0b00000010;
   sleep=0x00;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_PWR_MGMT_1, sleep);
   
   //i2c_start();
   //i2c_write(MPU6050_ADDRESS);
   //i2c_write(MPU6050_RA_PWR_MGMT_1);
   //i2c_write(sleep);
   //i2c_stop();
}*/


void Setup_MPU6050(){
   int8 v;
   //Sets sample rate to 1000/1+1 = 500Hz
   v=0x01;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_SMPLRT_DIV, v);
   //Disable FSync, 48Hz DLPF
   v=0x03;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_CONFIG, v);
   //Disable gyro self tests, scale of 500 degrees/s
   v=0b00001000;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_GYRO_CONFIG, v);
   //Disable accel self tests, scale of +-4g, no DHPF
   v=0b0000100;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_ACCEL_CONFIG, v);
   //Freefall threshold of <|0mg|
   v=0x00;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_FF_THR, v);
   //Freefall duration limit of 0
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_FF_DUR, v);
   //Motion threshold of >0mg
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_MOT_THR, v);
   //Motion duration of >0s
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_MOT_DUR, v);
   //Zero motion threshold
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_ZRMOT_THR, v);
   //Zero motion duration threshold
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_ZRMOT_DUR, v);
   //Disable sensor output to FIFO buffer
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_FIFO_EN, v);

   //AUX I2C setup
   //Sets AUX I2C to single master control, plus other config
   v=0x00;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_MST_CTRL, v);
   //Setup AUX I2C slaves   
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV0_ADDR,v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV0_REG, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV0_CTRL,v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV1_ADDR, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV1_REG, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV1_CTRL, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV2_ADDR, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV2_REG, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV2_CTRL, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV3_ADDR, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV3_REG, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV3_CTRL, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV4_ADDR, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV4_REG, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV4_DO, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV4_CTRL, v);
    LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV4_DI, v);
 
 
    //MPU6050_RA_I2C_MST_STATUS //Read-only
    //Setup INT pin and AUX I2C pass through
    v=0x00;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_INT_PIN_CFG, v);
   //Enable data ready interrupt
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_INT_ENABLE, v);

   //MPU6050_RA_DMP_INT_STATUS      //Read-only
   //MPU6050_RA_INT_STATUS 3A      //Read-only
    //MPU6050_RA_ACCEL_XOUT_H       //Read-only
    //MPU6050_RA_ACCEL_XOUT_L       //Read-only
    //MPU6050_RA_ACCEL_YOUT_H       //Read-only
    //MPU6050_RA_ACCEL_YOUT_L       //Read-only
    //MPU6050_RA_ACCEL_ZOUT_H       //Read-only
    //MPU6050_RA_ACCEL_ZOUT_L       //Read-only
    //MPU6050_RA_TEMP_OUT_H       //Read-only
    //MPU6050_RA_TEMP_OUT_L       //Read-only
    //MPU6050_RA_GYRO_XOUT_H       //Read-only
    //MPU6050_RA_GYRO_XOUT_L       //Read-only
    //MPU6050_RA_GYRO_YOUT_H       //Read-only
    //MPU6050_RA_GYRO_YOUT_L       //Read-only
    //MPU6050_RA_GYRO_ZOUT_H       //Read-only
    //MPU6050_RA_GYRO_ZOUT_L       //Read-only
    //MPU6050_RA_EXT_SENS_DATA_00    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_01    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_02    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_03    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_04    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_05    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_06    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_07    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_08    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_09    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_10    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_11    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_12    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_13    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_14    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_15    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_16    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_17    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_18    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_19    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_20    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_21    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_22    //Read-only
    //MPU6050_RA_EXT_SENS_DATA_23    //Read-only
    //MPU6050_RA_MOT_DETECT_STATUS    //Read-only

   //Slave out, dont care
   v=0x00;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV0_DO, v);
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV1_DO, v);    
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV2_DO, v);    
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_SLV3_DO, v);    
   //More slave config
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_I2C_MST_DELAY_CTRL, v);
   //Reset sensor signal paths
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_SIGNAL_PATH_RESET, v);    
   //Motion detection control
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_MOT_DETECT_CTRL, v);       
   //Disables FIFO, AUX I2C, FIFO and I2C reset bits to 0
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_USER_CTRL, v);
   
   //pll y se despierta la lectura de los sensores ya que al encender
   //el mpu este esta dormido y no hace lecturas de ningun sensor.
   //Sets clock source to gyro reference w/ PLL
   v=0x00;//se puede usar este valor ya que asi el pll esta en auto = 8Mhz
   //v=0b00000010; //este el pll 
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_PWR_MGMT_1, v);
   
   
   //Controls frequency of wakeups in accel low power mode plus the sensor standby modes
   v=0x00;
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_PWR_MGMT_2, v);
    //MPU6050_RA_BANK_SEL         //Not in datasheet
    //MPU6050_RA_MEM_START_ADDR      //Not in datasheet
    //MPU6050_RA_MEM_R_W         //Not in datasheet
    //MPU6050_RA_DMP_CFG_1         //Not in datasheet
    //MPU6050_RA_DMP_CFG_2         //Not in datasheet
    //MPU6050_RA_FIFO_COUNTH      //Read-only
    //MPU6050_RA_FIFO_COUNTL      //Read-only
   //Data transfer to and from the FIFO buffer
   LDByteWriteI2C(MPU6050_ADDRESS, MPU6050_RA_FIFO_R_W, v);
    //MPU6050_RA_WHO_AM_I          //Read-only, I2C address

   //printf("\nMPU6050 Setup Complete");  
}
