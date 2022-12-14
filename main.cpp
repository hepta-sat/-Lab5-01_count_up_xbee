#include "mbed.h"
#include "HEPTA_COM.h"

RawSerial pc(USBTX,USBRX,9600);
HEPTA_COM com(p9,p10,9600);

int main()
{
    pc.printf("Xbee Count Up Mode\r\n");
    for(int i = 0; i < 10; i++) {
        com.printf("num = %d\r\n",i);
        wait(1.0);
    }
}
