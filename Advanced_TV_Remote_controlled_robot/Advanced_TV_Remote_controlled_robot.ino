int tsop = 12;
int leftmotor = 2;
int leftmotor1 = 3;
int rightmotor = 4;
int rightmotor1 = 5;
void setup() {
  Serial.begin(9600);
  pinMode(tsop, INPUT);
  pinMode(leftmotor, OUTPUT);
  pinMode(leftmotor1, OUTPUT);
  pinMode(rightmotor, OUTPUT);
  pinMode(rightmotor1, OUTPUT);

}

void loop() {
  int remote_val = remote();
  if (remote_val == 128)//no.1 in sony remote
  {
    digitalWrite(leftmotor, HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW );
    Serial, println("forward");
  }
  if (remote_val == 129)//no.2 in sony remote
  {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH );
    Serial, println("backward");
  }
  if (remote_val == 130)//no.3 in sony remote
  {
    digitalWrite(leftmotor, HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH);
    Serial, println("right");
  }
  if (remote_val == 131)//no.4 in sony remote
  {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW );
    Serial, println("left");
  }
  if (remote_val == 132)//no.5 in sony remote
  {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, LOW);
    Serial, println("stop");
  }
  int remote() {
    int value = 0;
    int time = pulseIn(tsop, LOW);
    if (time > 2000) {
      for (int counter1 = 0; counter1 < 12; counter1++) {
         if (pulseIn(12, LOW) > 1000){
        value = value + (1 << counter);
      }
    }
  }
  return value;
}
