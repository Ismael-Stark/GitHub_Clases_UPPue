from machine import Pin, ADC, PWM
import utime
import math

pwm=PWM(Pin(14), freq= 500, duty=0)
adc=ADC(Pin(12))
adc.atten(ADC.ATTN_11DB)
while True:

    a= adc.read()
    b= math.trunc(a/4)
    pwm.duty(b)
    print("Valor leido: " +str(b))
    utime.sleep_ms(100)

