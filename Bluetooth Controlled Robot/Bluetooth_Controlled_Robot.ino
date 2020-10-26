int motorPin1 = 3;
int motorPin2 = 4;
int motorPin3 = 5;
int motorPin4 = 6;
int state;
int flag;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    state = Serial.read();
    flag = 0;
  }
  if (state == '0') {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW );
    if (flag = 0) {
      Serial.println("MOTOR:off");
      flag = 1;
    }
  }
  else if (state == '1') {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    if (flag == 0) {
      Serial.println("MOTOR1:right");
      flag = 1;
    }
  }
  else if (state == '2') {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW );
    if (flag == 0) {
      Serial.println("MOTOR1:left");
      flag = 1;
    }
  }
  else if (state == '3') {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    if (flag == 0) {
      Serial.println("MOTOR2:right");
      flag = 1;
    }
  }
  else if (state == '4') {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW );
    if (flag == 0) {
      Serial.println("MOTOR2:LEFT");
      flag = 1;
    }
  }
}

