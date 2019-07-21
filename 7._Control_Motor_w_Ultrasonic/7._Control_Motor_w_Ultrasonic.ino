#include <mathstronauts_arduino_library.h>
int motor =13;
int trig =8;
int echo =9;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  //1. Read distance from ultrasonic
  float distance = ultrasonicDistance(trig, echo);
  
  //2. Check if distance is less than x
  if(){
    //Turn on motor
    digitalWrite(,);
  }
  else{
    // Turn off motor
    digitalWrite(,);
    
  }
}
