#include <mathstronauts_arduino_library.h>
int red_led = 2;
int yellow_led = 3;
int green_led = 4;
int motor =13;
int trig =8;
int echo =9;
int distance_limit = 50;
void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  //1. Read distance from ultrasonic
  float distance = ultrasonicDistance(trig, echo);
  
  //2. Check if distance is less than x
  if(distance < distance_limit ){
    //Turn on motor
    digitalWrite(motor,HIGH);
    delay(round(1000*(distance/distance_limit)));
    digitalWrite(motor,LOW);
    delay(round(1000*(distance/distance_limit)));
  }
  else{
    // Turn off motor
    digitalWrite(motor,LOW);
    
  }
}
