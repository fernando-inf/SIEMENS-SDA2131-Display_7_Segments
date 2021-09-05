void setup() {
  
  pinMode(DATA, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(ENABLE, OUTPUT); 
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  //BOUNCE2
  button_upBank.attach(BUTTON_PIN);
  button_upBank.interval(25); // ms
  button_upBank.setPressedState(LOW);
}

void loop() {
  Display7S();
  button1();
}
