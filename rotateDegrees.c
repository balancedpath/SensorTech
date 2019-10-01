/* Forward then Stop.c */
#include "simpletools.h"
#include "abdrive.h"

#define DEGREES -25

int main()                    
{
  float radius = 664.76;
  float ticDistance = 3.25;
  float ticPerDegree = (radius / ticDistance / 360 / 2);
  int amountOfTics = (ticPerDegree * DEGREES);
  
  drive_goto(amountOfTics, amountOfTics * -1);
  pause(1000);
  drive_goto(amountOfTics * -1, amountOfTics);
}