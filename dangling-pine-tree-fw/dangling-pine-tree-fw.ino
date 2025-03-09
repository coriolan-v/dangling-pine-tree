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
int delay2 = 100;
int pos3 = 180;
int pos4 = 0;

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the Servo object

  //  myservo.write(pos3);
  //  delay(1000);

  //  myservo.write(pos4);
  //  delay(1000);

    myservo.write(homePos);
   delay(1000);

}

void loop() {
  //scene1();

  scene3();
}
