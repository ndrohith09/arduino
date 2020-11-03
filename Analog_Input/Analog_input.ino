int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      
int sensorValue = 0;  
void setup() {
pinMode(ledPin, OUTPUT);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(sensorValue);
}
