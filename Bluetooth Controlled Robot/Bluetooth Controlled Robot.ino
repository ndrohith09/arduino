int motorPin1 = 2;
int motorPin2 = 3;
int motorPin3 = 4;
int motorPin4 = 5;
int state;
int flag;
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    state = Serial.read();
    flag = 0;
  }
  if (state == '0') {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW );
    if (flag = 0) {
      Serial.println("MOTOR:off");
      flag = 1;
    }
  }
  else if (state == '1') {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    if (flag == 0) {
      Serial.println("MOTOR1:right");
      flag = 1;
    }
  }
  else if (state == '2') {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW );
    if (flag == 0) {
      Serial.println("MOTOR1:left");
      flag = 1;
    }
  }
  else if (state == '3') {
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    if (flag == 0) {
      Serial.println("MOTOR2:right");
      flag = 1;
    }
  }
  else if (state == '4') {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW );
    if (flag == 0) {
      Serial.println("MOTOR2:LEFT");
      flag = 1;
    }
  }
}

