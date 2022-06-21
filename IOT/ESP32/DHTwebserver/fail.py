import time
import machine
def restart_and_reconnect():
    print('')
    print('Algo fallo, reiniciando y Reconectando...')
    time.sleep(10)
    machine.reset()