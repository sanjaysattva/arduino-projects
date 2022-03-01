// C++ code
//
int input=0;
void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A1, INPUT);
}

void loop()
{
 input= analogRead(A1);
  Serial.println(input);
  if(input>=100&&input<=300)
  {
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  }
  else if(input>=300&&input<=500)
  {
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, LOW);
  }
  else if(input>=500)
  {
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  }
  
  
  delay(100); // Delay a little bit to improve simulation performance
}
