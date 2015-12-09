/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;
Servo myservo2;

void setup() {
  myservo.attach(9); 
  myservo2.attach(8);
}

void loop() {
    myservo.write(75);
    myservo2.write(75);
    delay(5000);
    myservo.write(0);
    myservo2.write(0);
}
