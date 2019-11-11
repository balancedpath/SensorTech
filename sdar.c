#include "simpletools.h"
#include "abdrive.h"
#include "math.h"
#include "ping.h"

typedef struct __WALL_E {
    int pin;
} WALL_E;

typedef struct __CENTIMETER {
    int distance;
} Centimeter;

typedef struct __SMALLEST {
    Centimeter distance;
    float degrees;    
} Smallest;

typedef struct __ROTATOR {
    int ticks;
    float current_degrees;
    float degrees_per_turn;
    Smallest smallest;    
} Rotator;

const WALL_E EYES = { 8 };

Centimeter measure_distance(const WALL_E * eyes) {
    int distance = ping_cm(eyes->pin);
    Centimeter cm = { distance };
    return cm;
}

float ticks_per_degree() {
    static float radius = 664.76;
    static float tick_distance = 3.25;
    
    float tick_per_degree = radius / tick_distance / 360.0 / 2.0;
    
    return tick_per_degree;      
}

float degree_per_tick() {
    return 1.0 / ticks_per_degree();    
}

Rotator rotator_from_ticks(int ticks) {
    Rotator rotator;
    Smallest smallest;
    
    float degrees_per_turn = degree_per_tick() * ticks;
    
    rotator.ticks = ticks;
    rotator.current_degrees = 0.0;
    rotator.degrees_per_turn = degrees_per_turn;
    
    Centimeter cm = {0xffff};
    smallest.distance = cm;
    smallest.degrees = 0.0;
    
    rotator.smallest = smallest;
    return rotator;
}

int has_rotated_360(const Rotator * rotator) {
    return rotator->current_degrees > 360.0;    
}

// Indicates whether scanning has completed
enum Poll { Complete = 0, NotComplete = 1 };

// Rotates the device, and measures the distance.
// If the measurement is smaller than the current
// smallest, sets the measurement as smallest,
// and remembers the current rotation.
// Returns `Complete` if device already rotated > 360 degrees,
// `NotComplete` otherwise.
enum Poll poll_rotator(Rotator * rotator) {
    if(has_rotated_360(rotator)) {
        return Complete;
    }
    
    drive_goto(rotator->ticks, rotator->ticks * -1);
    
    rotator->current_degrees += rotator->degrees_per_turn;
    
    Centimeter distance = measure_distance(&EYES);
    
    if(distance.distance < rotator->smallest.distance.distance) {
        rotator->smallest.distance = distance;
        rotator->smallest.degrees = rotator->current_degrees;    
    }
    
    return NotComplete;
}

void rotate_towards_closest_object(Rotator * rotator) {
    
    float difference = rotator->current_degrees - rotator->smallest.degrees;
    
    float times_to_turn = difference / rotator->degrees_per_turn;
    
    int speed = times_to_turn * rotator->ticks;
    drive_goto(-speed, speed);
}

float distance_to_ticks(int distance) {
    
    static float TICKS_PER_ROUND = 64;
    static float DIAMETER_MM = 208;

    float TICK_DISTANCE = DIAMETER_MM / TICKS_PER_ROUND;
    return (distance / TICK_DISTANCE);  
}

int main() {
    for(;;) {
        Rotator rotator = rotator_from_ticks(4);
    
        while(poll_rotator(&rotator)) {pause(100);}
        rotate_towards_closest_object(&rotator);
        
        int ticks = distance_to_ticks((rotator.smallest.distance.distance * 10 + 5));
        
        drive_goto(ticks, ticks);
        pause(2000);
        drive_goto(-ticks, -ticks);
        pause(2000);
    }  
}