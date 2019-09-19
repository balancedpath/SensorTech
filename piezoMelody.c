#include "simpletools.h"                      // Include simple tools

#define SPEAKER_PIN 4

int myFreqOut(int speakerPin, int freq, int duration, int delay) {
    freqout(speakerPin, duration, freq);
    pause(delay);
}

int waveSound() {
  for (int i = 100; i < 500;i++) {
    freqout(SPEAKER_PIN, 3, i*10);
  }
  for (int i = 600; i > 300;i--) {
    freqout(SPEAKER_PIN, 5, i*10);
  }
}  

int main() // Main function
{
  
  waveSound();
    while (1) {
        myFreqOut(SPEAKER_PIN, 660, 100, 150);
        myFreqOut(SPEAKER_PIN, 660, 100, 300);
        myFreqOut(SPEAKER_PIN, 660, 100, 300);
        myFreqOut(SPEAKER_PIN, 510, 100, 100);
        myFreqOut(SPEAKER_PIN, 660, 100, 300);
        myFreqOut(SPEAKER_PIN, 770, 100, 550);
        myFreqOut(SPEAKER_PIN, 380, 100, 575);
        myFreqOut(SPEAKER_PIN, 510, 100, 450);
        myFreqOut(SPEAKER_PIN, 380, 100, 400);
        myFreqOut(SPEAKER_PIN, 320, 100, 500);
        myFreqOut(SPEAKER_PIN, 440, 100, 300);
        myFreqOut(SPEAKER_PIN, 480, 80, 330);
        myFreqOut(SPEAKER_PIN, 450, 100, 150);
        myFreqOut(SPEAKER_PIN, 430, 100, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 200);
        myFreqOut(SPEAKER_PIN, 660, 80, 200);
        myFreqOut(SPEAKER_PIN, 760, 50, 150);
        myFreqOut(SPEAKER_PIN, 860, 100, 300);
        myFreqOut(SPEAKER_PIN, 700, 80, 150);
        myFreqOut(SPEAKER_PIN, 760, 50, 350);
        myFreqOut(SPEAKER_PIN, 660, 80, 300);
        myFreqOut(SPEAKER_PIN, 520, 80, 150);
        myFreqOut(SPEAKER_PIN, 580, 80, 150);
        myFreqOut(SPEAKER_PIN, 480, 80, 500);
        myFreqOut(SPEAKER_PIN, 510, 100, 450);
        myFreqOut(SPEAKER_PIN, 380, 100, 400);
        myFreqOut(SPEAKER_PIN, 320, 100, 500);
        myFreqOut(SPEAKER_PIN, 440, 100, 300);
        myFreqOut(SPEAKER_PIN, 480, 80, 330);
        myFreqOut(SPEAKER_PIN, 450, 100, 150);
        myFreqOut(SPEAKER_PIN, 430, 100, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 200);
        myFreqOut(SPEAKER_PIN, 660, 80, 200);
        myFreqOut(SPEAKER_PIN, 760, 50, 150);
        myFreqOut(SPEAKER_PIN, 860, 100, 300);
        myFreqOut(SPEAKER_PIN, 700, 80, 150);
        myFreqOut(SPEAKER_PIN, 760, 50, 350);
        myFreqOut(SPEAKER_PIN, 660, 80, 300);
        myFreqOut(SPEAKER_PIN, 520, 80, 150);
        myFreqOut(SPEAKER_PIN, 580, 80, 150);
        myFreqOut(SPEAKER_PIN, 480, 80, 500);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 760, 100, 100);
        myFreqOut(SPEAKER_PIN, 720, 100, 150);
        myFreqOut(SPEAKER_PIN, 680, 100, 150);
        myFreqOut(SPEAKER_PIN, 620, 150, 300);
        myFreqOut(SPEAKER_PIN, 650, 150, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 150);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 100);
        myFreqOut(SPEAKER_PIN, 570, 100, 220);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 760, 100, 100);
        myFreqOut(SPEAKER_PIN, 720, 100, 150);
        myFreqOut(SPEAKER_PIN, 680, 100, 150);
        myFreqOut(SPEAKER_PIN, 620, 150, 300);
        myFreqOut(SPEAKER_PIN, 650, 200, 300);
        myFreqOut(SPEAKER_PIN, 1020, 80, 300);
        myFreqOut(SPEAKER_PIN, 1020, 80, 150);
        myFreqOut(SPEAKER_PIN, 1020, 80, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 760, 100, 100);
        myFreqOut(SPEAKER_PIN, 720, 100, 150);
        myFreqOut(SPEAKER_PIN, 680, 100, 150);
        myFreqOut(SPEAKER_PIN, 620, 150, 300);
        myFreqOut(SPEAKER_PIN, 650, 150, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 150);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 100);
        myFreqOut(SPEAKER_PIN, 570, 100, 420);
        myFreqOut(SPEAKER_PIN, 585, 100, 450);
        myFreqOut(SPEAKER_PIN, 550, 100, 420);
        myFreqOut(SPEAKER_PIN, 500, 100, 360);
        myFreqOut(SPEAKER_PIN, 380, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 760, 100, 100);
        myFreqOut(SPEAKER_PIN, 720, 100, 150);
        myFreqOut(SPEAKER_PIN, 680, 100, 150);
        myFreqOut(SPEAKER_PIN, 620, 150, 300);
        myFreqOut(SPEAKER_PIN, 650, 150, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 150);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 100);
        myFreqOut(SPEAKER_PIN, 570, 100, 220);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 760, 100, 100);
        myFreqOut(SPEAKER_PIN, 720, 100, 150);
        myFreqOut(SPEAKER_PIN, 680, 100, 150);
        myFreqOut(SPEAKER_PIN, 620, 150, 300);
        myFreqOut(SPEAKER_PIN, 650, 200, 300);
        myFreqOut(SPEAKER_PIN, 1020, 80, 300);
        myFreqOut(SPEAKER_PIN, 1020, 80, 150);
        myFreqOut(SPEAKER_PIN, 1020, 80, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 760, 100, 100);
        myFreqOut(SPEAKER_PIN, 720, 100, 150);
        myFreqOut(SPEAKER_PIN, 680, 100, 150);
        myFreqOut(SPEAKER_PIN, 620, 150, 300);
        myFreqOut(SPEAKER_PIN, 650, 150, 300);
        myFreqOut(SPEAKER_PIN, 380, 100, 150);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 430, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 100);
        myFreqOut(SPEAKER_PIN, 570, 100, 420);
        myFreqOut(SPEAKER_PIN, 585, 100, 450);
        myFreqOut(SPEAKER_PIN, 550, 100, 420);
        myFreqOut(SPEAKER_PIN, 500, 100, 360);
        myFreqOut(SPEAKER_PIN, 380, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 100, 150);
        myFreqOut(SPEAKER_PIN, 500, 100, 300);
        myFreqOut(SPEAKER_PIN, 500, 60, 150);
        myFreqOut(SPEAKER_PIN, 500, 80, 300);
        myFreqOut(SPEAKER_PIN, 500, 60, 350);
        myFreqOut(SPEAKER_PIN, 500, 80, 150);
        myFreqOut(SPEAKER_PIN, 580, 80, 350);
        myFreqOut(SPEAKER_PIN, 660, 80, 150);
        myFreqOut(SPEAKER_PIN, 500, 80, 300);
        myFreqOut(SPEAKER_PIN, 430, 80, 150);
        myFreqOut(SPEAKER_PIN, 380, 80, 600);
        myFreqOut(SPEAKER_PIN, 500, 60, 150);
        myFreqOut(SPEAKER_PIN, 500, 80, 300);
        myFreqOut(SPEAKER_PIN, 500, 60, 350);
        myFreqOut(SPEAKER_PIN, 500, 80, 150);
        myFreqOut(SPEAKER_PIN, 580, 80, 150);
        myFreqOut(SPEAKER_PIN, 660, 80, 550);
        myFreqOut(SPEAKER_PIN, 870, 80, 325);
        myFreqOut(SPEAKER_PIN, 760, 80, 600);
        myFreqOut(SPEAKER_PIN, 500, 60, 150);
        myFreqOut(SPEAKER_PIN, 500, 80, 300);
        myFreqOut(SPEAKER_PIN, 500, 60, 350);
        myFreqOut(SPEAKER_PIN, 500, 80, 150);
        myFreqOut(SPEAKER_PIN, 580, 80, 350);
        myFreqOut(SPEAKER_PIN, 660, 80, 150);
        myFreqOut(SPEAKER_PIN, 500, 80, 300);
        myFreqOut(SPEAKER_PIN, 430, 80, 150);
        myFreqOut(SPEAKER_PIN, 380, 80, 600);
        myFreqOut(SPEAKER_PIN, 660, 100, 150);
        myFreqOut(SPEAKER_PIN, 660, 100, 300);
        myFreqOut(SPEAKER_PIN, 660, 100, 300);
        myFreqOut(SPEAKER_PIN, 510, 100, 100);
        myFreqOut(SPEAKER_PIN, 660, 100, 300);
        myFreqOut(SPEAKER_PIN, 770, 100, 550);
        myFreqOut(SPEAKER_PIN, 380, 100, 575);
    }
}