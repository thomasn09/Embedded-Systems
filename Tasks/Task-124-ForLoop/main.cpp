#include "mbed.h"

// DigitalOut redLED(PC_2,0);
// DigitalOut yellowLED(PC_3,0);
// DigitalOut greenLED(PC_6,0);



int main()
{
    int pattern;
 do{
     flushInputBuffer();
     printf("\nenter a pattern(0-7)");
     while ( (pattern < 0) || (grade >= 7) );
    
    }
 
 printf("pattern entered = %d\n", pattern);


}


