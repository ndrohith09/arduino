int LED = 9 // Connect led output pin to 9th digital pin
void setup() {
 
  pinMode(LED, OUTPUT);
}


void loop() {
  digitalWrite(LED, HIGH);   
  delay(1000);                       
  digitalWrite(LED, LOW);    
  delay(1000);                    
}
