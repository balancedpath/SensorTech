#include "simpletools.h"
#include "wavplayer.h"
    
int main()                                        // main function
{
  int DO = 22, CLK = 23, DI = 24, CS = 25;        // SD I/O pins
  sd_mount(DO, CLK, DI, CS);                      // Mount SD card
 
  const char techloop[] = {"ZEEBRA.wav"};         // Set up techloop string
  wav_play(techloop);                             // Pass to wav player 
  pause(3000);                                    // Play for 3.5 s
  wav_stop();                                      // Stop playing  

  const char techloop3[] = {"trip.wav"};           // Set up techloop string
  wav_play(techloop3);                             // Pass to wav player
  pause(30000);                                    // Play for 3.5 s
  wav_stop();                                      // Stop playing
}