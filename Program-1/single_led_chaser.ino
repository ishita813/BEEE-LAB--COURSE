void setup() 
{
//can put those pin numbers according the wires arranged in the audrino pin
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

}
