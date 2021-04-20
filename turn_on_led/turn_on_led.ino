// number of the pins should be assigned here
int Led = 3;
int Baud_rate = 9600;

void setup() {
  // initialize digital pin LED as an output.
  pinMode(Led, OUTPUT);
  Serial.begin(Baud_rate);
}

// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int command = Serial.read();
    if (command == '1') {
      digitalWrite(Led, 1); 
      Serial.println("LED on");
    } else if (command == '2') {
      digitalWrite(Led, 0); 
      Serial.println("LED off");
    } else {
      Serial.println("unknown command, please only press 1 or 2");
    } 
  }
}
