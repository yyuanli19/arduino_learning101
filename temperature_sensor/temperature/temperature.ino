int Temp_PIN = 1;
float R = 0.48828125;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(Temp_PIN);
  temp = temp * R;
  Serial.print("Temprature: ");
  Serial.print(temp);
  Serial.println("C");
  
  delay(1000);
}
