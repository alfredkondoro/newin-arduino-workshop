void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
 if(Serial.available()>0){
  int rxd = Serial.read();
  if(rxd == 'U'){
    digitalWrite(4, HIGH);
    }
  if(rxd == 'D'){
    digitalWrite(5, HIGH);
    }
  if(rxd == 'L'){
    digitalWrite(6, HIGH);
    }
  if(rxd == 'R'){
    digitalWrite(7, HIGH);
    }
  if(rxd == 'C'){
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    }
  }
}
