#define buz 9
void setup() {
  pinMode(buz, OUTPUT);

}

void loop() {
  noTone(buz);
  tone(buz,200);
  delay(2000);
  noTone(buz);
  delay(2000);
  
//  for(int i = 20; i < 2000; i++){
//      tone(buz,i);
//      delay(5);
//      noTone(buz);
//    }
//    noTone(buz);
//    delay(1000);

}
