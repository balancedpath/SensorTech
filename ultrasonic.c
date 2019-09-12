#include "simpletools.h"                      // Include simpletools header
#include "ping.h"                             // Include ping header

unsigned long int start_time;
unsigned long int end_time; 
unsigned long int total_time;

int old = 0;
int counts = 0;
int distance;                                 // Declare distance variable

int main()                                    // main function
{
  while(1)                                    // Repeat indefinitely
  {
    start_time = CNT;
            
    distance = ping_cm(8);                    // Get cm distance from Ping)))

    end_time = CNT;

    total_time = end_time - start_time;
    
    print("%c distance = %d%c cm",            // Display distance
             HOME, distance, CLREOL);
    print("\n start time = %u%c",
            (start_time), CLREOL);
    print("\n end   time = %u%c",
            (end_time), CLREOL);
    print("\n total time = %u%c",
            (total_time), CLREOL);
    print("\n system clock freq in Hz = %d%c",
            CLKFREQ, CLREOL);
            
    pause(200);
                     
  }
}