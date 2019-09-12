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

      print("%c Started counter\n", HOME);


      unsigned long int count = 0;
      unsigned long int start_time = CNT;

      for (;;) {
        freqout(1, 1, 38000);
        irRight = input(2);
        
        count += 1;

        if(CNT > (start_time + CLKFREQ * 5) && count > 0) {
          print("Aantal metingen in 5 sec = %d\n", count);
          break;
        }
      }

    }
    
    print("%c irRight = %d\n", HOME, irRight);
    
    pause(1000);
  }
}