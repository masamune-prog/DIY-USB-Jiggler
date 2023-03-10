#include <DigiMouse.h>

void setup()
{
  //Allow for driver installation
   DigiMouse.delay(5000);
  //Set Pins 0 and 1 as outputs.
  //Some Digisparks have a built-in LED on pin 0, while some have it on
  //pin 1. This way, we can all Digisparks.
  DigiMouse.begin();
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  
}
void loop() {
  //Delete the digitalWrite lines if you do not want if flashing
  //Change left and right pixel changes 
  
  int left = 2;
  int right = 2;
  while(true) {
    digitalWrite(1, HIGH);
    digitalWrite(0, HIGH);
    DigiMouse.move(right,0,0); // 2px right
    DigiMouse.delay(50);
    DigiMouse.move(-left,0,0); // 2px left
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
    DigiMouse.delay(100);
  }
}
