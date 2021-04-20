int Led = 3;

void setup() {
  // initialize digital pin LED as an output.
  pinMode(Led, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led, 1);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(Led, 0); 
  delay(100);
}
