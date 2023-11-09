#include "mbed.h"

PortOut lights(PortC, 0b0000000001001100);

int main()
{
    //All OFF
    lights = 0;

    while (true)
    {
        lights = 0b0000000000000100; //
        wait_us(1000000);
        lights = 0b0000000000001000;  // yellow 
        wait_us(1000000);
        lights = 0b0000000000001000;  // yellow 
        lights = 0b0000000001000000;   //green
        wait_us(1000000);
        lights = 0b0000000000000100; //red
        lights = 0b0000000001000000;   //green
        wait_us(1000000);                
    }
}