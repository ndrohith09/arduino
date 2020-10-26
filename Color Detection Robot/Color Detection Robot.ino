const int sampling = 100;
unsigned long v, w, x;
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop() {

  for (int i = 0; i < sampling; i++) {
    int a = analogRead(A5);
    int b = analogRead(A4);
    int c = analogRead(A3);
    v += a ;
    w += b;
    x += c;
  }
  v /= sampling;
  w /= sampling;
  x /= sampling;
  Serial.print("a"); Serial.print(v);
  Serial.print("b"); Serial.print(w);
  Serial.print("c"); Serial.print(x);

  if ((38 < v < 42) && (46 < w < 48) && (59 < x < 61))
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  if ((38 < v < 42) && (62 < w < 65) && (60 < x < 62))
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}

