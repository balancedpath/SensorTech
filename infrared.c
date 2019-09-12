#include "simpletools.h"

unsigned long int start_time;
unsigned long int end_time; 
unsigned long int total_time;


int irRight;

int main()
{
  low(27);

  while(1)
  {
    start_time = CNT;
    
    freqout(1, 1, 38000);
    irRight = input(2);
    
    end_time = CNT;

    total_time = end_time - start_time;
    
    print("%c irRight = %d", HOME, irRight);

    print("\n start time = %u%c",start_time , CLREOL);
    print("\n end   time = %u%c", end_time, CLREOL);
    print("\n total time = %u%c", total_time, CLREOL);
    print("\n system clock freq in Hz = %d%c", CLKFREQ, CLREOL);
    
    pause(100);
  }
}