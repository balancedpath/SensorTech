#include "simpletools.h"                   // Include simple tools
#include "abdrive.h"
#include "math.h"

int rotate(int degrees) {
    float radius = 664.76;
    float ticDistance = 3.25;
    float ticPerDegree = (radius / ticDistance / 360 / 2);
    int amountOfTics = (ticPerDegree * degrees);
    drive_goto(amountOfTics, amountOfTics * -1);
  }

int main()                                    // Main function
{
  float dist_wall = 150; // in mm
  float dist_cros = sqrt(2*pow(dist_wall,2));
  float dist_roof = dist_cros / 2;
  
  int ticks_wall = dist_wall / 3.25;
  int ticks_cros = dist_cros / 3.25;
  int ticks_roof = dist_roof / 3.25;
 
  drive_goto(ticks_wall, ticks_wall);
  rotate(46);
  
  drive_goto(ticks_roof, ticks_roof);
  rotate(91);
  
  drive_goto(ticks_roof, ticks_roof);
  rotate(46);
  
  drive_goto(ticks_wall, ticks_wall);
  rotate(91);
  
  drive_goto(ticks_wall, ticks_wall);
  rotate(136);
  
  drive_goto(ticks_cros, ticks_cros);
  rotate(-136);
  
  drive_goto(ticks_wall, ticks_wall);
  rotate(-136);
  
  drive_goto(ticks_cros, ticks_cros);
  
}
