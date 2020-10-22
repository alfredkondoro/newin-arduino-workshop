#include<Stepper.h>

const int stepsPerRevolution = 48;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void clockWise(){
digitalWrite(8 , HIGH);
digitalWrite(9 , LOW);
digitalWrite(10 , LOW);
digitalWrite(11 , LOW);
delay(50);
digitalWrite(8 , LOW);
digitalWrite(9 , HIGH);
digitalWrite(10 , LOW);
digitalWrite(11 , LOW);
delay(50);
digitalWrite(8 , LOW);
digitalWrite(9 , LOW);
digitalWrite(10 , HIGH);
digitalWrite(11 , LOW);
delay(50);
digitalWrite(8 , LOW);
digitalWrite(9 , LOW);
digitalWrite(10 , LOW);
digitalWrite(11 , HIGH);
delay(50);
}

void antiClockWise(){
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
delay(50);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
delay(50);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
delay(50);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
delay(50);  
}

void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  
}

void loop(){
for(int i = 0; i<12; i++){
  clockWise();
  }   
  delay(1000);
for(int i = 0; i<12; i++){
  antiClockWise();
  }
  delay(1000);
}
