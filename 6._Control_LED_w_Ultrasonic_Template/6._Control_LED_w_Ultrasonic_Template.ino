#include <mathstronauts_arduino_library.h>
int red_led = 2;
int yellow_led = 3;
int green_led = 4;
int trig =8;
int echo =9;
void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
   //1. Read distance from ultrasonic
  float distance = ultrasonicDistance(trig, echo);
  
  //2. Check if distance is less than x
  if(){
    //Turn on LED
    digitalWrite(,);
  }
  else{
    // Turn off LED
    digitalWrite(,);
  }
  delay(100);
}
