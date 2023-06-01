#define red 3
#define blue 5
#define green 6
#define pot1 A0
#define pot2 A1
#define pot3 A2
void setup()
{
  pinMode( red , OUTPUT );
  pinMode( blue , OUTPUT );
  pinMode( green , OUTPUT );
  pinMode( pot1 , INPUT );
  pinMode( pot2, INPUT );
  pinMode( pot3, INPUT );
}

void loop()
{
  int a = analogRead( pot1 );
  int b = analogRead( pot2 );
  int c = analogRead( pot3 );
  analogWrite( red , a );
  analogWrite( green , b );
  analogWrite( blue , c );
}