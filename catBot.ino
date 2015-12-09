/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

#define TURN_TIME 500

Servo myservo;
Servo myservo2;

void setup() {
  myservo.attach(9); 
  myservo2.attach(8);
  myservo.write(90);
  myservo2.write(90);
}

void loop() {
    myservo.write(0);
    myservo2.write(0);
    delay(TURN_TIME);
    myservo.write(90);
    myservo2.write(90);
    
    delay(2000);
}
