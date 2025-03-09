void scene1() {
  for (pos = homePos; pos <= pos1; pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(1);            // waits 15 ms for the servo to reach the position
  }

  delay(100);

  for (pos = pos1; pos >= 0; pos -= 1) {  // goes from 180 degrees to 0 degrees
    myservo.write(pos);                   // tell servo to go to position in variable 'pos'
    delay(1);                             // waits 15 ms for the servo to reach the position
  }

  delay(100);

  for (pos = 0; pos <= pos1; pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(1);            // waits 15 ms for the servo to reach the position
  }

  delay(100);

  for (pos = pos1; pos >= 0; pos -= 1) {  // goes from 180 degrees to 0 degrees
    myservo.write(pos);                   // tell servo to go to position in variable 'pos'
    delay(1);                             // waits 15 ms for the servo to reach the position
  }

  delay(100);

  for (pos = 0; pos <= pos1; pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(1);            // waits 15 ms for the servo to reach the position
  }

  delay(100);

  for (pos = pos1; pos >= homePos; pos -= 1) {  // goes from 180 degrees to 0 degrees
    myservo.write(pos);                         // tell servo to go to position in variable 'pos'
    delay(1);                                   // waits 15 ms for the servo to reach the position
  }

  delay(10000);
}




int delay3 = 100;
int delay4 = 6000;

int numberOfLoops = 3;

void scene2() {

  for (pos = homePos; pos >= pos4; pos -= 1) {  // goes from 180 degrees to 0 degrees
      myservo.write(pos);                      // tell servo to go to position in variable 'pos'
      delayMicroseconds(delay2);               // waits 15 ms for the servo to reach the position
    }
    delay(delay3);

  for (int i = 0; i < numberOfLoops; i++) {

    for (pos = pos4; pos <= pos3; pos += 1) {  // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);         // tell servo to go to position in variable 'pos'
      delayMicroseconds(delay2);  // waits 15 ms for the servo to reach the position
    }
    delay(delay3);

    for (pos = pos3; pos >= pos4; pos -= 1) {  // goes from 180 degrees to 0 degrees
    myservo.write(pos);                         // tell servo to go to position in variable 'pos'
    delayMicroseconds(delay2);                  // waits 15 ms for the servo to reach the position
  }
  delay(delay3);


  }

  for (pos = pos4; pos <= homePos; pos += 1) {  // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);         // tell servo to go to position in variable 'pos'
      delayMicroseconds(delay2);  // waits 15 ms for the servo to reach the position
    }
    delay(delay3);

  
  delay(delay4);
}

int delay_pos4 = 300;

void scene3(){

  for (int i = 0; i < numberOfLoops; i++)
  {
    myservo.write(45);
    delay(delay_pos4);

    myservo.write(135);
    delay(delay_pos4);
  }

  myservo.write(homePos);
  
  delay(15000);
}