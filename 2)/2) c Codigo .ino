#define red 1
#define blue 2
#define green 3
void setup()
{
  pinMode( red , OUTPUT );
  pinMode( blue , OUTPUT );
  pinMode( green , OUTPUT );
}

void loop()
{
  analogWrite( red , 0 );
  analogWrite( blue , 130);
  analogWrite( green , 120);
  delay( 1000 );
  analogWrite( blue , 0);
  analogWrite( green , 0);
  analogWrite( red , 130);
  delay( 1000 );
  analogWrite( red , 150 );
  analogWrite( blue , 0);
  analogWrite( green , 150);
  delay( 1000 );
}