#define pot1 A0
#define pot2 A1
#define pot3 A2
#define red 9
#define blue 10
#define green 11
void setup()
{
	pinMode( red , OUTPUT );
  	pinMode( blue , OUTPUT );
  	pinMode( green , OUTPUT );
  	pinMode( pot1 , INPUT );
  	pinMode( pot2 , INPUT );
  	pinMode( pot3 , INPUT );
  	Serial.begin( 9600 );
  	
}

void loop()
{
  int a = analogRead( pot1 );
  int b = analogRead( pot2 );
  int c = analogRead( pot3 );
  int Aa = map( a , 0 , 1023 , 0 , 255 );
  int Bb = map( b , 0 , 1023 , 0 , 255 );
  int Cc = map( c , 0 , 1023 , 0 , 255 );
  Serial.print( "Rojo: " );
  delay(10);
  Serial.print( Bb );
  Serial.print( " Azul: " );
  delay(10);
  Serial.print( Aa );
  Serial.print( " Verde: " );
  delay(10);
  Serial.println( Cc );
  analogWrite( red , Aa );
  analogWrite( blue , Bb );
  analogWrite( green , Cc );
}