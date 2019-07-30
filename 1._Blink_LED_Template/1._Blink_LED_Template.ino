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
  //1. Turn on red LED
  digitalWrite(red_led, HIGH);
  //2. Wait for x amount of seconds
  delay(1000); //1 second delay
  //3. Turn off red LED
  digitalWrite(red_led, LOW);
  //4. Wait for x amount of seconds
  delay(1000); //1 second delay

}
