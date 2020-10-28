int temp;
int rx;
void setup(){
  pinMode(A1, INPUT);
  }
void loop(){
  rx = analogRead(A1);
  temp = (rx * 4.88) / 10;
  Serial.println(temp);
  delay(300);
  }
