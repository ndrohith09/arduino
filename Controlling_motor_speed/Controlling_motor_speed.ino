int in1 =9;
int in2 = 10;
int en1 = 11;
int speed = 10;
void setup() {
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(en1,OUTPUT);
}

void loop() {
digitalWrite(en1,speed);
digitalWrite(in1.LOW);
digitalWrite(in2.HIGH);
}
