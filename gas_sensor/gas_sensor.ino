int gas;
int rx;

void setup() {
  pinMode(A1, INPUT);
}

void loop() {
  rx = analogRead(A1);
  int g = (rx * 4.88);
  gas = g * 2;
  Serial.println(gas);
  delay(300);
}
