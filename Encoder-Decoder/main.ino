#include <Wire.h>

//String x;
//char y;
int code=0;
int input =0;
void setup()
{
  Wire.begin();
  Serial.begin(9600);
  Serial.println("ENTER 2 DIGIT  CODE");
  
 
}

void loop()
{
  
   /*if (Serial.available() > 0) {
    
    input = Serial.read();
   }
   if(input == 1311)
  {
   Serial.println("CORRECT! ENTER 2 DIGIT ");
   
  }
  /*else
  {
    Serial.println("INCORRECT PASSCODE");
    
  }*/
  
  
    if (Serial.available() > 0) {
    
      int c = Serial.parseInt();
      code = c;
      Serial.println("the 2 digit code is ");
    Serial.println(code);

    //Encryption starts

    int encrypt =0;
    encrypt = code + 11;

    Wire.beginTransmission(2);                                                
    Wire.write(encrypt);                                                    
    Wire.endTransmission();
    Serial.println("the encrypt code is ");
    Serial.println(encrypt);

    delay(2000);
   
  }
  
}
