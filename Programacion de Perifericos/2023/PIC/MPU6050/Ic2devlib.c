void LDByteWriteI2C(int8 mpu,int8 addr,unsigned int8 cmd){
   i2c_start(); 
   //i2c_write(MPU6050_ADDRESS);
   i2c_write(mpu);
   i2c_write(addr);
   i2c_write(cmd);
   i2c_stop(); 
}

int8 LDByteReadI2C(unsigned char mpu,unsigned char addr){
   unsigned char cmd;
   i2c_start();
   //i2c_write(MPU6050_ADDRESS);
   i2c_write(mpu);
   i2c_write(addr);
   i2c_start(); 
   i2c_write(MPU6050_R);
   cmd=i2c_read(0);
   i2c_stop();
   
   return cmd;
}

/*int8 LDByteReadI2C(unsigned char mpu,unsigned char addr,unsigned char cmd){
   i2c_start(); 
   //i2c_write(MPU6050_ADDRESS);
   i2c_write(mpu);
   i2c_write(addr);
   i2c_start(); 
   i2c_write(MPU6050_R);
   cmd=i2c_read(0);
   i2c_stop();
   
   return cmd;
}*/

