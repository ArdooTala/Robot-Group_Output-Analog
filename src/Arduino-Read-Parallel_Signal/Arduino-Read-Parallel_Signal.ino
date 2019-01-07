void setup() {
  Serial.begin(9600);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {
  int val = 0;
  for (int i = 8; i > 1; i--) {
    val = val << 1 | !digitalRead(i);
  }
}
