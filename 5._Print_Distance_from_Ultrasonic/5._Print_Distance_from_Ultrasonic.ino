#include <mathstronauts_arduino_library.h>
int trig =8;
int echo =9;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  //1. Read distance from ultrasonic
  float distance = ultrasonicDistance(trig, echo);
  
  //2. Print distance
  Serial.println();
}
