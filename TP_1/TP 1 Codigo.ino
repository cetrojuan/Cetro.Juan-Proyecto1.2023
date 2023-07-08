#define red1 6
#define blue1 5
#define red2 4
#define green 3
#define blue2 9
void setup()
{
	pinMode( red1 , OUTPUT );
  	pinMode( blue1 , OUTPUT );
 	pinMode( red2 , OUTPUT );
  	pinMode( green , OUTPUT );
  	pinMode( blue2 , OUTPUT );
}

void loop()
{
	analogWrite( red1 , 255 );
  	delay( 1000 );
	analogWrite( red1 , 0 );
  	delay( 1000 );
 	digitalWrite( blue1 , HIGH );
 	digitalWrite( red2 , HIGH );
  	delay( 1000 );
 	digitalWrite( blue1 , LOW );
 	digitalWrite( red2 , LOW );
  	delay( 1000 );
  	analogWrite( green , 100 );
  	analogWrite( blue2 , 100 );
  	delay( 1000 );
  	analogWrite( green , 0 );
 	analogWrite( blue2 , 0 );
  	delay( 1000 );
}