#include <Wire.h>
int x;

int red = 11;
int blue = 10;
int green = 9;
int red2 = 6;
int blue2 = 5;
int green2 = 3;

void setup()
{
  pinMode(red , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(blue , OUTPUT);
  pinMode(red2 , OUTPUT);
  pinMode(green2 , OUTPUT);
  pinMode(blue2 , OUTPUT);
  Wire.begin(2);
  
  Wire.onReceive(receiveEvent);
}
void receiveEvent(int bytes)
{
  x = Wire.read();
  Serial.println("The encrypted code is :");
  Serial.print(x);
  
 //DECRYPT
  int decrypt=0;
  decrypt = x-11;
  
  Serial.println("The decrypted code is: ");
  Serial.print(decrypt);
  
  int tens = decrypt/10;
  int ones = decrypt - tens*10;
  
  //LED WORKING
  //TENS PLACE
  if(tens == 1)
  {
    analogWrite(red, 255);
    analogWrite(green,200);
    analogWrite(blue, 0);
  }
  if(tens == 2)
  {
    analogWrite(red, 255);
    analogWrite(green,0);
    analogWrite(blue, 0);
  }
  if(tens == 3)
  {
    analogWrite(red, 255);
    analogWrite(green,50);
    analogWrite(blue, 10);
  }
  if(tens == 7)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  if(tens==4)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  if(tens == 5)
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  if(tens == 6)
  {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
   if(tens == 8)
  {
    analogWrite(red, 255);
    analogWrite(green,189);
    analogWrite(blue, 255);
  }
   if(tens == 9)
  {
    analogWrite(red, 255);
    analogWrite(green,255);
    analogWrite(blue, 255);
  }
  
  //ONES PLACE
    if(ones == 0)
  {
    analogWrite(red2, 0);
    analogWrite(green2,0);
    analogWrite(blue2, 0);
  }
  if(ones == 1)
  {
    analogWrite(red2, 255);
    analogWrite(green2,122);
    analogWrite(blue2, 0);
  }
  if(ones == 2)
  {
    analogWrite(red2, 255);
    analogWrite(green2,0);
    analogWrite(blue2, 0);
  }
  if(ones == 3)
  {
    analogWrite(red2, 255);
    analogWrite(green2,50);
    analogWrite(blue2, 10);
  }
  if(ones == 7)
  {
    digitalWrite(red2, HIGH);
    digitalWrite(green2, LOW);
    digitalWrite(blue2, HIGH);
  }
  if(ones==4)
  {
    digitalWrite(red2, HIGH);
    digitalWrite(green2, HIGH);
    digitalWrite(blue2, LOW);
  }
  if(ones == 5)
  {
    digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(blue2, LOW);
  }
  if(ones == 6)
  {
    digitalWrite(red2, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(blue2, HIGH);
  }
   if(ones == 8)
  {
    analogWrite(red2, 255);
    analogWrite(green2,189);
    analogWrite(blue2, 255);
  }
   if(ones == 9)
  {
    analogWrite(red2, 255);
    analogWrite(green2,255);
    analogWrite(blue2, 255);
  }
  
}

void loop()
{
  delay(5000);
}
