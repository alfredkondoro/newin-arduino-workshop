//---1---
//6     2
//---7---
//5     3
//---4---
byte seven_seg_digits[10][7] = 
{ { 1,1,1,1,1,1,0 }, // = 0
  { 0,1,1,0,0,0,0 }, // = 1
  { 1,1,0,1,1,0,1 }, // = 2
  { 1,1,1,1,0,0,1 }, // = 3
  { 0,1,1,0,0,1,1 }, // = 4
  { 1,0,1,1,0,1,1 }, // = 5
  { 1,0,1,1,1,1,1 }, // = 6
  { 1,1,1,0,0,0,0 }, // = 7
  { 1,1,1,1,1,1,1 }, // = 8
  { 1,1,1,1,0,1,1 } // = 9
 };
void setup()
{
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 writeDot(1); // start with the "dot" off
}
void writeDot(byte dot)
{
 digitalWrite(9, dot);
}
void sevenSegWrite(byte digit)
{
 byte pin = 8;
 for (byte segCount = 0; segCount < 7; ++segCount)
 {
 digitalWrite(pin, seven_seg_digits[digit][segCount]);
 pin--;
 }
}
void loop()
{
 for (int i = 0; i < 10; i++)
 {
 sevenSegWrite(i);
 delay(1000);
 } delay(1000);
} 
