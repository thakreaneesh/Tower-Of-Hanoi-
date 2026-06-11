#include <Servo.h>

Servo servo1;  // Define servo objects
Servo servo2;

void setup() 
{
  servo1.attach(9);  // Attach servo1 to pin 9
  servo2.attach(10); // Attach servo2 to pin 10
}

void loop() {
  // Move servo1 from 0 to 75 degrees
  servo1.write(86);
  servo2.write(94);
  // for (int angle = 0; angle <= 90; angle++) {
  //   servo1.write(angle);
  //   servo2.write(180-angle);
  //   delay(15); // Adjust speed of servo movement
  // }

  // Move servo2 from 180 to 105 degrees
  // for (int angle = 180; angle >= 105; angle--) {
  //   servo2.write(angle);
  //   delay(15); // Adjust speed of servo movement
  // }

  // Hold position for 10 seconds
  delay(10000);

  // Move both servos back to mean position
  servo1.write(75);
  servo2.write(105);
}

