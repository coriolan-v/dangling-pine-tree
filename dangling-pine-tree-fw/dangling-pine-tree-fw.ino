/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

int pos1 = 180;
int pos2 = 0;

int homePos = 90;

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the Servo object

   myservo.write(homePos);
   delay(3000);
}

void loop() {
  for (pos = homePos; pos <= pos1; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15 ms for the servo to reach the position
  }

  delay(100);
 
  for (pos = pos1; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15 ms for the servo to reach the position
  }

   delay(100);

  for (pos = 0; pos <= pos1; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15 ms for the servo to reach the position
  }

   delay(100);
 
  for (pos = pos1; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15 ms for the servo to reach the position
  }

   delay(100);

  for (pos = 0; pos <= pos1; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15 ms for the servo to reach the position
  }
 
 delay(100);
  
  for (pos = pos1; pos >= homePos; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15 ms for the servo to reach the position
  }
  
   delay(10000);
}
