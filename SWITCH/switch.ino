void setup() 
{
  
pinMode(12,OUTPUT);//output is for led 
pinMode(13,INPUT);//input is for switch as switch gives the instruction to led for on and off
}

void loop() 
{
  int a= digitalRead(13);//digital read is just to read not the showable implementation just to give input command
  if(a==HIGH)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
}
