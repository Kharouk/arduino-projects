const int ledPin = 13;//the led attach to
int buzzer = 8;

void setup()
{ 
  pinMode(ledPin,OUTPUT); //initialize the ledPin as an output
  pinMode(2,INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(2, HIGH);
} 
/******************************************/
void loop() 
{  
  int digitalVal = digitalRead(2);
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
    digitalWrite(buzzer, LOW); // turn buzzer off
  }
  else
  {
    digitalWrite(ledPin,HIGH); //turn the led on 
    digitalWrite(buzzer, HIGH); // turn the buzzer on
  }
}
/**********************************************/
