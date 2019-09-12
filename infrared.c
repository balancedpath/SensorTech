/*
  Test IR Detectors.c
*/

#include "simpletools.h"

int irRight;

int main()
{
  low(27);

  while(1)
  {
    freqout(1, 1, 38000);
    irRight = input(2);

    print("%c irRight = %d", HOME, irRight);
    pause(10);
  }
}