int red_led = 2;
int yellow_led = 3;
int green_led = 4;
int button = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  //1. Read the state of the button
  int button state = digitalRead();

  //2. Check if button is pressed
  if(){
    // Turn on LED
    
  }
  else{
    // Turn off LED
    
  }
}
