#include "simpletools.h"

int irRight;

int main()
{
  low(27);

  while(1)
  {
    freqout(1, 1, 38000);
    irRight = input(2);

    if (irRight == 0) {

      print("Started counter\n");


      unsigned long int count = 0;
      unsigned long int start_time = CNT;
      
      print("CPU time before count: %u\n", CNT);
      
      long int zeroes = 0;
      long int ones = 0;

      for (;;) {
        freqout(1, 1, 38000);
        irRight = input(2);
        
        if (irRight == 0) {
          zeroes += 1;
        } else {
          ones += 1;
        }          
        
        count += 1;

        if(CNT > (start_time + CLKFREQ * 1) && count > 0) {
          print("Aantal metingen in 5 sec = %d\n", count);
                    print("Aantal 0 in 5 sec = %d \nAantal 1 in 5 sec = %d\n", zeroes, ones);

          print("CPU time after count: %u\n", CNT);

          break;
        }
      }

    }
    
    print("irRight = %d\n", irRight);
   
    
    pause(3000);
  }
}