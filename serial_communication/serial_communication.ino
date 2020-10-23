int led = 13;
int rx;

void setup(){
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop(){
  if(Serial.available()>0){
    rx = Serial.read();
    if(rx == 'a' || rx == 'A'){
    digitalWrite(led, HIGH);
    }
    if(rx == 'w' || rx == 'W'){
    digitalWrite(led, LOW);
    }
  }
}
