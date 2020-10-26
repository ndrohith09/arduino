int ldr = A2;
int led = 11;
void setup(){
  Serial.begin(9600);
}
void loop(){
  int a = analogRead(A2);
  int b = map(a,0,1023,0,255);
  analogWrite(led,b);
  Serial.println(b); 
}

