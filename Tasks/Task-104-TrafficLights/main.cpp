#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

LCD_16X2_DISPLAY lcd;

int main()
{

  volatile int flash = 0;

    red = 1; 
    lcd.puts("RED");
    wait_us(1000000);
    
    volatile int n;
    for(n=0; n<=3; n=n+1){
        lcd.cls();
        lcd.puts("yellow");
        wait_us(1000);
    }
    
    

    green = 1;
    lcd.cls();
    lcd.puts("Green");    
    wait_us(1000000);

    green = 0;
    amber = 0;
    red = 0;
}
    

    
