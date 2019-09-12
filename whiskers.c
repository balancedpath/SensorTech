/*
  Test Whiskers with Terminal.c
 
  Display whisker states in terminal.  1 = not pressed, 0 = pressed. 
*/

#include "simpletools.h"

int main()
{
  freqout(4, 2000, 3000);                     // Speaker tone: P4, 2 s, 3 kHz
  
  for(;;) {    
      // as long as there's no initial touch, continue
      if (input(8)) { continue; }
      
      unsigned long int count = 0;
      unsigned long int start_time = CNT;
      int prv = 0;
         
      for(;;) {
        int current = input(8);
           
        if(prv != current) {
          count += 1;
        }
            
        prv = current;
            
        if(CNT > (start_time + CLKFREQ * 5) && count > 0) {
          print("Aantal metingen = %d\n", count);
          break;
        }
      }
  }
}