#define red1 3
#define blue1 5
#define green1 6
#define red2 9
#define blue2 10
#define green2 11
#define pot A0
void setup()
{
  pinMode( red1 , OUTPUT );
  pinMode( blue1 , OUTPUT );
  pinMode( green1 , OUTPUT );
  pinMode( red2 , OUTPUT );
  pinMode( blue2 , OUTPUT );
  pinMode( green2 , OUTPUT );
  pinMode( pot , INPUT );
}

void loop()
{
  int a = analogRead( pot );
  analogWrite( red1 , 255 );
  analogWrite( blue1 , 255 );
  analogWrite( red2 , 255 );
  analogWrite( green2 , 255 );
  delay( a );
  analogWrite( red1 , 0 );
  analogWrite( blue1 , 0 );
  analogWrite( red2 , 0 );
  analogWrite( green2 , 0 );
  delay( a );
}