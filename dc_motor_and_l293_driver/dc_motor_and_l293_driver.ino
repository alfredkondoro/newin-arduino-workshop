void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void forward(){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  }

void reverse(){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  }

void left(){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  }
  
void right(){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  }
void stop(){
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  }
void loop() {
  forward();
  delay(5000);
  stop();
  delay(1000);
  reverse();
  delay(5000);
  stop();
  delay(1000);
  right();
  delay(5000);
  stop();
  delay(1000);
  left();
  delay(5000);
  stop();
  delay(1000);
}
