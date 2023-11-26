#define PIR 2
#define led 3
void setup()
{
  pinMode( PIR , INPUT );
  pinMode( led , OUTPUT );
  Serial.begin( 9600 );
}

void loop()
{
  int seMueve = digitalRead( PIR );
  Serial.println(seMueve);
  if(seMueve == 1)
  {
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}
