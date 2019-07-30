#include <mathstronauts_arduino_library.h>
int red_led = 2;
int yellow_led = 3;
int green_led = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //1. Red LED ON; Yellow LED OFF; Green LED OFF
  digitalWrite(,);
  digitalWrite(,);
  digitalWrite(,);
  //2. Wait for x amount of seconds
  delay();
  //3. Red LED OFF; Yellow LED ON; Green LED OFF
  digitalWrite(,);
  digitalWrite(,);
  digitalWrite(,);
  //4. Wait for x amount of seconds
  delay();
  //5. Red LED OFF; Yellow LED OFF; Green LED ON
  digitalWrite(,);
  digitalWrite(,);
  digitalWrite(,);
  //6. Wait for x amount of seconds
  delay();
}
