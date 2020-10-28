int IR;
void setup(){
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  }
void loop(){
  IR = digitalRead(9);
  if(IR == HIGH){
      digitalWrite(8, HIGH);
      }
  else{
      digitalWrite(8, LOW);
      }
  }
