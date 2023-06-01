#define led 3
void setup()
{
  pinMode( led , OUTPUT );
}

void loop()
{
  analogWrite( led , 10);
  delay( 1000 );
  analogWrite( led , 40);
  delay( 1000 );
  analogWrite( led , 70);
  delay( 1000 );
  analogWrite( led , 100);
  delay( 1000 );
  analogWrite( led , 255);
  delay( 1000 );
}