
Arduino Code:
//LED_NIGHT_LAMP
const int lamp = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
}

void loop()
{
  int c = analogRead(A0);
  delay(500);
  if(c<300)
  {
    digitalWrite(lamp,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(lamp,HIGH);
    delay(1000);
  }
}

## Result:
Glowing of LED in darkness was verified after uploading the program.