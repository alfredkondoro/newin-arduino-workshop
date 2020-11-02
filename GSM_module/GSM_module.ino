#include <SoftwareSerial.h>
SoftwareSerial mySerial(9,8);
char mobno[15] = "255788092978";
char msg[50] = "This is Trial message from mobile";

void setup(){
  mySerial.begin(9600);
  Serial.begin(9600);
  delay(100);
  gsminit();
}
void loop(){
}

void gsminit(){
  mySerial.println("AT");
  delay(500);
  mySerial.println("ATE0");
  delay(500);
  mySerial.println("AT+CMGF=1");
}

void sendsms(){
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"+255788092978\"\r");
  mySerial.println("AT+CMGS=");
  mySerial.print("\"");
  mySerial.print(mobno);
  mySerial.print("\"\r");
  delay(1000);
  mySerial.println(msg);
  delay(100);
  mySerial.println((char)26);
  delay(1000);
}

void makecall(){
  mySerial.print("ATD");
  mySerial.print(mobno);
  mySerial.println(";");
  delay(1000);
}

void hangup(){
  mySerial.println("ATH");
}
