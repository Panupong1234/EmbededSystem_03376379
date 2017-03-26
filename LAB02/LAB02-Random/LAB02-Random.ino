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
//int digit4 = 10;
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
    0b100, 
    0b010, 
    0b001, 
//    0b0001, 
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
  digitalWrite(digit1,digit[a] & 1<<2);
  digitalWrite(digit2,digit[a] & 1<<1);
  digitalWrite(digit3,digit[a] & 1<<0);
//  digitalWrite(digit4,digit[a] & 1<<0);
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
//  pinMode(digit4, OUTPUT);
}

void loop() {
int randomSeg;
int randomSeg2;
int randomSeg3;
randomSeg = random(1,6);
displayDigit(0);
display7seg(randomSeg);
delay(2000);
randomSeg2 = random(1,6);
displayDigit(1);
display7seg(randomSeg2);
delay(2000);
randomSeg3 = random(1,6);
displayDigit(2);
display7seg(randomSeg3);
delay(2000);
//Show Number
for(int i= 0;i<=500;i++)
{
  displayDigit(0);
  display7seg(randomSeg);
  delay(5);
  displayDigit(1);
  display7seg(randomSeg2);
  delay(5);
  displayDigit(2);
  display7seg(randomSeg3);
  delay(5); 
  }
}

