// number of the pins should be assigned here
int Led = 6;
int Button = 4; 

void setup() {
  // initialize digital pin LED as an output.
  pinMode(Led, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(Button) == 0) {
    digitalWrite(Led, 1);   // turn the LED on (HIGH is the voltage level)
    }
  else {
    digitalWrite(Led, 0); 
    }
  // put your main code here, to run repeatedly:
  
}
