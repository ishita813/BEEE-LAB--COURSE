void setup() 
{
int i;
for(i=10;i<=13;i++)
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}
void loop() 
{
  int i;
  for(i=10;i<=13;i++)
  {
    digitalWrite(i,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  delay(1000);
  }
  
    for(i=10;i<=13;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  digitalWrite(i+1,LOW);
  delay(1000);
  }

    for(i=10;i<=13;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    digitalWrite(i+2,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  digitalWrite(i+1,LOW);
  digitalWrite(i+2,LOW);
  delay(1000);
  }

    for(i=10;i<=13;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    digitalWrite(i+2,HIGH);
    digitalWrite(i+3,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  digitalWrite(i+1,LOW);
  digitalWrite(i+2,LOW);
  digitalWrite(i+3,LOW);
  delay(1000);
  }
}
