# 1 "mcc_generated_files/examples/i2c1_master_example.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files/Microchip/MPLABX/v5.45/packs/Microchip/PIC16F1xxxx_DFP/1.5.133/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "mcc_generated_files/examples/i2c1_master_example.c" 2
# 47 "mcc_generated_files/examples/i2c1_master_example.c"
# 1 "mcc_generated_files/examples/i2c1_master_example.h" 1
# 50 "mcc_generated_files/examples/i2c1_master_example.h"
# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 1 3
# 13 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef signed char int8_t;






typedef signed int int16_t;







typedef __int24 int24_t;







typedef signed long int int32_t;







typedef signed long long int int64_t;







typedef unsigned char uint8_t;





typedef unsigned int uint16_t;






typedef __uint24 uint24_t;






typedef unsigned long int uint32_t;






typedef unsigned long long int uint64_t;
# 88 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef signed char int_least8_t;







typedef signed int int_least16_t;
# 109 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef __int24 int_least24_t;
# 118 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef signed long int int_least32_t;
# 127 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef signed long long int int_least64_t;
# 136 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint_least8_t;






typedef unsigned int uint_least16_t;
# 154 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef __uint24 uint_least24_t;







typedef unsigned long int uint_least32_t;







typedef unsigned long long int uint_least64_t;
# 181 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef signed char int_fast8_t;






typedef signed int int_fast16_t;
# 200 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef __int24 int_fast24_t;







typedef signed long int int_fast32_t;







typedef signed long long int int_fast64_t;







typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
# 240 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef __uint24 uint_fast24_t;






typedef unsigned long int uint_fast32_t;






typedef unsigned long long int uint_fast64_t;
# 263 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef int64_t intmax_t;
# 278 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef uint64_t uintmax_t;
# 289 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 3
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 50 "mcc_generated_files/examples/i2c1_master_example.h" 2

# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 1 3



# 1 "C:/Program Files/Microchip/MPLABX/v5.45/packs/Microchip/PIC16F1xxxx_DFP/1.5.133/xc8\\pic\\include\\__size_t.h" 1 3



typedef unsigned size_t;
# 4 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 2 3

# 1 "C:/Program Files/Microchip/MPLABX/v5.45/packs/Microchip/PIC16F1xxxx_DFP/1.5.133/xc8\\pic\\include\\__null.h" 1 3
# 5 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 2 3






# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdarg.h" 1 3






typedef void * va_list[1];

#pragma intrinsic(__va_start)
extern void * __va_start(void);

#pragma intrinsic(__va_arg)
extern void * __va_arg(void *, ...);
# 11 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 2 3
# 43 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 3
struct __prbuf
{
 char * ptr;
 void (* func)(char);
};
# 85 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 3
# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\conio.h" 1 3







# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\errno.h" 1 3
# 29 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\errno.h" 3
extern int errno;
# 8 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\conio.h" 2 3




extern void init_uart(void);

extern char getch(void);
extern char getche(void);
extern void putch(char);
extern void ungetch(char);

extern __bit kbhit(void);



extern char * cgets(char *);
extern void cputs(const char *);
# 85 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 2 3



extern int cprintf(char *, ...);
#pragma printf_check(cprintf)



extern int _doprnt(struct __prbuf *, const register char *, register va_list);
# 180 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdio.h" 3
#pragma printf_check(vprintf) const
#pragma printf_check(vsprintf) const

extern char * gets(char *);
extern int puts(const char *);
extern int scanf(const char *, ...) __attribute__((unsupported("scanf() is not supported by this compiler")));
extern int sscanf(const char *, const char *, ...) __attribute__((unsupported("sscanf() is not supported by this compiler")));
extern int vprintf(const char *, va_list) __attribute__((unsupported("vprintf() is not supported by this compiler")));
extern int vsprintf(char *, const char *, va_list) __attribute__((unsupported("vsprintf() is not supported by this compiler")));
extern int vscanf(const char *, va_list ap) __attribute__((unsupported("vscanf() is not supported by this compiler")));
extern int vsscanf(const char *, const char *, va_list) __attribute__((unsupported("vsscanf() is not supported by this compiler")));

#pragma printf_check(printf) const
#pragma printf_check(sprintf) const
extern int sprintf(char *, const char *, ...);
extern int printf(const char *, ...);
# 51 "mcc_generated_files/examples/i2c1_master_example.h" 2

# 1 "mcc_generated_files/examples/../i2c1_master.h" 1
# 55 "mcc_generated_files/examples/../i2c1_master.h"
# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdint.h" 1 3
# 55 "mcc_generated_files/examples/../i2c1_master.h" 2

# 1 "C:\\Program Files\\Microchip\\xc8\\v2.32\\pic\\include\\c90\\stdbool.h" 1 3
# 56 "mcc_generated_files/examples/../i2c1_master.h" 2


typedef enum {
    I2C1_NOERR,
    I2C1_BUSY,
    I2C1_FAIL


} i2c1_error_t;

typedef enum
{
    I2C1_STOP=1,
    I2C1_RESTART_READ,
    I2C1_RESTART_WRITE,
    I2C1_CONTINUE,
    I2C1_RESET_LINK
} i2c1_operations_t;

typedef uint8_t i2c1_address_t;
typedef i2c1_operations_t (*i2c1_callback_t)(void *funPtr);


i2c1_operations_t I2C1_CallbackReturnStop(void *funPtr);
i2c1_operations_t I2C1_CallbackReturnReset(void *funPtr);
i2c1_operations_t I2C1_CallbackRestartWrite(void *funPtr);
i2c1_operations_t I2C1_CallbackRestartRead(void *funPtr);






void I2C1_Initialize(void);
# 101 "mcc_generated_files/examples/../i2c1_master.h"
i2c1_error_t I2C1_Open(i2c1_address_t address);
# 111 "mcc_generated_files/examples/../i2c1_master.h"
i2c1_error_t I2C1_Close(void);
# 123 "mcc_generated_files/examples/../i2c1_master.h"
i2c1_error_t I2C1_MasterOperation(_Bool read);




i2c1_error_t I2C1_MasterWrite(void);




i2c1_error_t I2C1_MasterRead(void);
# 142 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetTimeout(uint8_t timeOut);
# 152 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetBuffer(void *buffer, size_t bufferSize);
# 164 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetDataCompleteCallback(i2c1_callback_t cb, void *ptr);
# 174 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetWriteCollisionCallback(i2c1_callback_t cb, void *ptr);
# 184 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetAddressNackCallback(i2c1_callback_t cb, void *ptr);
# 194 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetDataNackCallback(i2c1_callback_t cb, void *ptr);
# 204 "mcc_generated_files/examples/../i2c1_master.h"
void I2C1_SetTimeoutCallback(i2c1_callback_t cb, void *ptr);
# 52 "mcc_generated_files/examples/i2c1_master_example.h" 2


uint8_t I2C1_Read1ByteRegister(i2c1_address_t address, uint8_t reg);
uint16_t I2C1_Read2ByteRegister(i2c1_address_t address, uint8_t reg);
void I2C1_Write1ByteRegister(i2c1_address_t address, uint8_t reg, uint8_t data);
void I2C1_Write2ByteRegister(i2c1_address_t address, uint8_t reg, uint16_t data);
void I2C1_WriteNBytes(i2c1_address_t address, uint8_t *data, size_t len);
void I2C1_ReadNBytes(i2c1_address_t address, uint8_t *data, size_t len);
void I2C1_ReadDataBlock(i2c1_address_t address, uint8_t reg, uint8_t *data, size_t len);
# 47 "mcc_generated_files/examples/i2c1_master_example.c" 2



typedef struct
{
    size_t len;
    uint8_t *data;
}i2c1_buffer_t;

static i2c1_operations_t rd1RegCompleteHandler(void *ptr);
static i2c1_operations_t rd2RegCompleteHandler(void *ptr);
static i2c1_operations_t wr1RegCompleteHandler(void *ptr);
static i2c1_operations_t wr2RegCompleteHandler(void *ptr);
static i2c1_operations_t rdBlkRegCompleteHandler(void *ptr);


uint8_t I2C1_Read1ByteRegister(i2c1_address_t address, uint8_t reg)
{
    uint8_t returnValue = 0x00;

    while(!I2C1_Open(address));
    I2C1_SetDataCompleteCallback(rd1RegCompleteHandler,&returnValue);
    I2C1_SetBuffer(&reg,1);
    I2C1_SetAddressNackCallback((0),(0));
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());

    return returnValue;
}

uint16_t I2C1_Read2ByteRegister(i2c1_address_t address, uint8_t reg)
{
    uint16_t returnValue =0x00;

    while(!I2C1_Open(address));
    I2C1_SetDataCompleteCallback(rd2RegCompleteHandler,&returnValue);
    I2C1_SetBuffer(&reg,1);
    I2C1_SetAddressNackCallback((0),(0));
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());

    return (returnValue << 8 | returnValue >> 8);
}

void I2C1_Write1ByteRegister(i2c1_address_t address, uint8_t reg, uint8_t data)
{
    while(!I2C1_Open(address));
    I2C1_SetDataCompleteCallback(wr1RegCompleteHandler,&data);
    I2C1_SetBuffer(&reg,1);
    I2C1_SetAddressNackCallback((0),(0));
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());
}

void I2C1_Write2ByteRegister(i2c1_address_t address, uint8_t reg, uint16_t data)
{
    while(!I2C1_Open(address));
    I2C1_SetDataCompleteCallback(wr2RegCompleteHandler,&data);
    I2C1_SetBuffer(&reg,1);
    I2C1_SetAddressNackCallback((0),(0));
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());
}

void I2C1_WriteNBytes(i2c1_address_t address, uint8_t* data, size_t len)
{
    while(!I2C1_Open(address));
    I2C1_SetBuffer(data,len);
    I2C1_SetAddressNackCallback((0),(0));
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());
}

void I2C1_ReadNBytes(i2c1_address_t address, uint8_t *data, size_t len)
{
    while(!I2C1_Open(address));
    I2C1_SetBuffer(data,len);
    I2C1_MasterRead();
    while(I2C1_BUSY == I2C1_Close());
}

void I2C1_ReadDataBlock(i2c1_address_t address, uint8_t reg, uint8_t *data, size_t len)
{
    i2c1_buffer_t bufferBlock;
    bufferBlock.data = data;
    bufferBlock.len = len;

    while(!I2C1_Open(address));
    I2C1_SetDataCompleteCallback(rdBlkRegCompleteHandler,&bufferBlock);
    I2C1_SetBuffer(&reg,1);
    I2C1_SetAddressNackCallback((0),(0));
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());
}

static i2c1_operations_t rd1RegCompleteHandler(void *ptr)
{
    I2C1_SetBuffer(ptr,1);
    I2C1_SetDataCompleteCallback((0),(0));
    return I2C1_RESTART_READ;
}

static i2c1_operations_t rd2RegCompleteHandler(void *ptr)
{
    I2C1_SetBuffer(ptr,2);
    I2C1_SetDataCompleteCallback((0),(0));
    return I2C1_RESTART_READ;
}

static i2c1_operations_t wr1RegCompleteHandler(void *ptr)
{
    I2C1_SetBuffer(ptr,1);
    I2C1_SetDataCompleteCallback((0),(0));
    return I2C1_CONTINUE;
}

static i2c1_operations_t wr2RegCompleteHandler(void *ptr)
{
    I2C1_SetBuffer(ptr,2);
    I2C1_SetDataCompleteCallback((0),(0));
    return I2C1_CONTINUE;
}

static i2c1_operations_t rdBlkRegCompleteHandler(void *ptr)
{
    I2C1_SetBuffer(((i2c1_buffer_t *)ptr)->data,((i2c1_buffer_t*)ptr)->len);
    I2C1_SetDataCompleteCallback((0),(0));
    return I2C1_RESTART_READ;
}
