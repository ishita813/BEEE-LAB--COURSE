void setup() 
{
  int a;
  for(a=1;a<=10;a=a+3)
  {
    pinMode(a,OUTPUT);
  }

}

void loop() 
{
  int i,j;
  for(i=1;i<=10;i=i+3)
  {
    for(j=1;j<=i;j++)
    {
      digitalWrite(i,HIGH);
      delay(500);
      digitalWrite(i,LOW);
      delay(1000);
    }
  }
 
}
