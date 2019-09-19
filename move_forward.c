#include "simpletools.h"                      // Include simple tools
#include "abdrive.h"

// 64 ticks is (2 pi * r)
float ROUND = 64;

// Diameter in mm
float DIAMETER_MM = 208;
float distance_to_ticks(int distance) {
  
  float TICK_DISTANCE = DIAMETER_MM / ROUND;
  return (distance / TICK_DISTANCE);  
}

int main()
{
    int ticks_to_drive = distance_to_ticks(500);
    drive_goto(ticks_to_drive, ticks_to_drive);
    drive_goto(-ticks_to_drive, -ticks_to_drive);
}

