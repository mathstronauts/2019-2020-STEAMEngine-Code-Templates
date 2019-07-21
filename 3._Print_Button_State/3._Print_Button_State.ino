int button = 5;
int button_state;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  //1. Read the state of the button
  int button_state = digitalRead();
  
  //2. Print the state of the button
  Serial.println();
}
