void setup() {
  pinMode(4, INPUT);  // right sensor
  pinMode(5, INPUT);  // left sensor
  pinMode(8, OUTPUT); // right motor
  pinMode(9, OUTPUT); // right motor
  pinMode(6, OUTPUT); // left motor
  pinMode(7, OUTPUT); // left motor
}

void loop() {
  int sensorright = digitalRead(4); // Getting value from right sensor
  int sensorleft = digitalRead(5); // getting value from left sensor
  if(sensorright == 1 && sensorleft == 1) // both sensor detecting the line to move forward
  {
    digitalWrite(7, 1);
    digitalWrite(6, 0);
    digitalWrite(9, 1);
    digitalWrite(8, 0);
  }
 else if(sensorright == 1 && sensorleft == 0) //right sensor detecting to turn left
  {
    digitalWrite(7, 0);
    digitalWrite(6, 1);
    digitalWrite(9, 1);
    digitalWrite(8, 0);
  }
 else if(sensorright == 0 && sensorleft == 1)//left sensor detecting to turn right
  {
    digitalWrite(7, 1);
    digitalWrite(6, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 1);
  }
  else if(sensorright == 0 && sensorleft == 0)//when there is no line to follow or robot is not placed on the line
  {
    digitalWrite(7, 0);
    digitalWrite(6, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
  }
}

