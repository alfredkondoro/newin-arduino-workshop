int gas;
int rx;
#define led 4

void setup() {
  pinMode(A1, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if(analogRead(A1)){
    rx = analogRead(A1);
    int g = (rx * 4.88);
    gas = g * 2;
    Serial.println(gas);
    digitalWrite(led, HIGH);
    delay(3000);
  }
}
