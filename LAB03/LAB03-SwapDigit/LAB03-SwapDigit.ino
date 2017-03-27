int SEG_A=2;
int SEG_B=3;
int SEG_C=4;
int SEG_D=5;
int SEG_E=6;
int SEG_F=7;
int SEG_G=8;
int digit1 = 13;
int digit2 = 12;
int digit3 = 11;
int digit4 = 10;
char seg[] =
  {
    0b11111100, 
    0b01100000, 
    0b11011010, 
    0b11110010, 
    0b01100110, 
    0b10110110, 
    0b10111110, 
    0b11100000, 
    0b11111110, 
    0b11110110, 
   } ;
char digit[] =
  {
    //    digit1
    0b1000, 
    //    digit2
    0b0100, 
    //    digit3
    0b0010, 
    //    digit4
    0b0001, 
   } ;
void display7seg(int a)
{
  digitalWrite(SEG_A,seg[a] & 1<<7);
  digitalWrite(SEG_B,seg[a] & 1<<6);
  digitalWrite(SEG_C,seg[a] & 1<<5);
  digitalWrite(SEG_D,seg[a] & 1<<4);
  digitalWrite(SEG_E,seg[a] & 1<<3);
  digitalWrite(SEG_F,seg[a] & 1<<2);
  digitalWrite(SEG_G,seg[a] & 1<<1);
  } 
void displayDigit(int a)
{
  digitalWrite(digit1,digit[a] & 1<<3);
  digitalWrite(digit2,digit[a] & 1<<2);
  digitalWrite(digit3,digit[a] & 1<<1);
  digitalWrite(digit4,digit[a] & 1<<0);
  } 
void setup() {
  pinMode(SEG_A,OUTPUT);
  pinMode(SEG_B,OUTPUT);
  pinMode(SEG_C,OUTPUT);
  pinMode(SEG_D,OUTPUT);
  pinMode(SEG_E,OUTPUT);
  pinMode(SEG_F,OUTPUT);
  pinMode(SEG_G,OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
}

void loop() {
for(int i = 0; i<=3;i++)
{
display7seg(8);
//Swap digit
displayDigit(i);
delay(500);
}
for(int i = 0;i<=200;i++)
{
//digit1
display7seg(0);
displayDigit(0);
delay(5);
//digit2
display7seg(3);
displayDigit(1);
delay(5);
//digit3
display7seg(1);
displayDigit(2);
delay(5);
//digit4
display7seg(9);
displayDigit(3);
delay(5);
}
}
