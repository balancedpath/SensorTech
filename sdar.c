#include "simpletools.h"
#include "abdrive.h"
#include "ping.h"

typedef struct __WALL_E {
    int pin;
} WALL_E;

typedef struct __CENTIMETER {
    int distance;
} Centimeter;

typedef struct __ROTATOR {
    int speed;  
} Rotator;

typedef struct __DEGREES {
    int value;    
} Degrees;

typedef struct __SMALLEST {
    int distance;
    int idx;    
} Smallest;

Centimeter measure_distance(const WALL_E * eyes) {
    int distance = ping_cm(eyes->pin);
    Centimeter cm = { distance };
    return cm;
}

Rotator rotator_from_degrees(Degrees degrees) {
    static float radius = 664.76;
    static float tick_distance = 3.25;
    float tick_per_degree = radius / tick_distance / 360 / 2;
    int rotation_speed = tick_per_degree * degrees.value;
    
    Rotator rotator = { rotation_speed };
    return rotator;
}

void rotate_to(int rotation) {
    drive_goto(rotation, rotation * -1);
}

void rotate(const Rotator * rotator) {
    rotate_to(rotator->speed);    
}

void rotate_rev(const Rotator * rotator) {
    rotate_to(rotator->speed * -1);   
}

const WALL_E EYES = { 8 };
const Degrees DEGREES_PER_MEASUREMENT = { 20 };
const Degrees MEASUREMENT_RANGE = { 360 };

float TICKS_PER_ROUND = 64;

// Diameter in mm
float DIAMETER_MM = 208;
float distance_to_ticks(int distance) {
  
  float TICK_DISTANCE = DIAMETER_MM / TICKS_PER_ROUND;
  return (distance / TICK_DISTANCE);  
}

int main()
{
    Rotator rotator = rotator_from_degrees(DEGREES_PER_MEASUREMENT);
    int NUMBER_OF_MEASUREMENTS = MEASUREMENT_RANGE.value / DEGREES_PER_MEASUREMENT.value;
     
    for(;;) {
        Smallest current_smallest = {0xff, 0};
        
        for(int idx = 0; idx <= NUMBER_OF_MEASUREMENTS; idx++) {
            Centimeter measured = measure_distance(&EYES);
            
            if (measured.distance < current_smallest.distance) {
                current_smallest.distance = measured.distance;
                current_smallest.idx = idx;    
            }
            
            rotate(&rotator);
            
            print("The distance was %d\n", measured.distance);
            print("Current smallest dst %d with idx %d\n", current_smallest.distance, current_smallest.idx);
            pause(500);
        }
        
        Degrees degrees_to_rotate_back = {(NUMBER_OF_MEASUREMENTS - 1 - current_smallest.idx) * DEGREES_PER_MEASUREMENT.value};
        
        Rotator rev = rotator_from_degrees(degrees_to_rotate_back);
        rotate_rev(&rev);
        
        int ticks = distance_to_ticks((current_smallest.distance + 5) * 10);
        drive_goto(ticks, ticks);
        pause(200);
        drive_goto(-ticks, -ticks);
        pause(2500);
    }
}    
