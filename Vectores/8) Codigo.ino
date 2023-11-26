#define led 3
#define bot 2
int vect[30];
void setup()
{
  pinMode( led , OUTPUT );
  pinMode( bot , INPUT );
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led,HIGH);
  for( int i = 0 ; i < (sizeof(vect)/sizeof(int)) ; i++ )
  {
    int lectura = digitalRead(bot);
    if( lectura != HIGH )
    {
      vect[i] = 1;
    }else{
      vect[i] = 0;
    }
    delay(100);
  }
  digitalWrite(led,LOW);
  for( int i = 0 ; i < (sizeof(vect)/sizeof(int)) ; i++ )
  {
  	Serial.print(vect[i]);
  }
  Serial.println("");
  delay(2000);
}