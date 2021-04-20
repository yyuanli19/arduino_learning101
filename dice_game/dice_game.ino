// number of the pins should be assigned here
int Led0 = 5;
int Led1 = 6;
int Led2 = 7;
int Button = 8; 

void setup() {
  // initialize digital pin LED as an output.
  pinMode(Led0, OUTPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Button, INPUT);
  randomSeed(analogRead(A0));
}

// the loop function runs over and over again forever
int current_value = 0;
int old_value = 0;

void loop() {
  current_value = digitalRead(Button);
  if (current_value != old_value && current_value == HIGH) {
    set_led(random(1, 7));
    delay(50);
  }
  old_value = current_value;
  
}

void set_led(const long result) {
  digitalWrite(Led0, result & B001);
  digitalWrite(Led1, result & B010);
  digitalWrite(Led2, result & B100);
  
}
