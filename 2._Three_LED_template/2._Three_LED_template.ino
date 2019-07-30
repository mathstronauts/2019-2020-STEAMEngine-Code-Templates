#include <mathstronauts_arduino_library.h>
int red_led = 3;
int yellow_led = 4;
int green_led = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //1. Red LED ON; Yellow LED OFF; Green LED OFF
  digitalWrite(red_led,HIGH);
  digitalWrite(yellow_led,LOW);
  digitalWrite(green_led,LOW);
  //2. Wait for x amount of seconds
  delay(1000);//1 second delay
  //3. Red LED OFF; Yellow LED ON; Green LED OFF
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,HIGH);
  digitalWrite(green_led,LOW);
  //4. Wait for x amount of seconds
  delay(1000);//1 second delay
  //5. Red LED OFF; Yellow LED OFF; Green LED ON
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,LOW);
  digitalWrite(green_led,HIGH);
  //6. Wait for x amount of seconds
  delay(1000);//1 second delay
}
