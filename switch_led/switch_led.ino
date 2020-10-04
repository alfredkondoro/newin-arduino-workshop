int led = 2;
int button = 3;
int state = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
    state=digitalRead(button);
    if(state == LOW){
      digitalWrite(led, HIGH);      
    }
    else{
      digitalWrite(led, LOW);      
    }
}
