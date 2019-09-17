/* Forward then Stop.c */
#include "simpletools.h"
#include "abdrive.h"

#define DEGREES -30
#define TIME 1000

int main()                    
{
  float radius = 664.76;
  float ticDistance = 3.25;
  float ticPerDegree = (radius / ticDistance / 360 / 2);
  int amountOfTics = (ticPerDegree * DEGREES / (TIME / 1000));
  
  drive_speed(amountOfTics, amountOfTics * -1);
  pause(TIME);
  
  drive_speed(0, 0);
  pause(1000);

  drive_speed(amountOfTics * -1, amountOfTics);
  pause(TIME);
  
  drive_speed(0, 0);
}