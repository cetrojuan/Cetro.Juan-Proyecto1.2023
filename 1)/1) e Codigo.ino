#define red1 1
#define blue1 2
#define green1 3 
#define red2 4
#define blue2 5
#define green2 6
void setup()
{
	pinMode( red1 , OUTPUT );
  	pinMode( blue1 , OUTPUT );
  	pinMode( green1 , OUTPUT );
  	pinMode( red2 , OUTPUT );
  	pinMode( blue2 , OUTPUT );
  	pinMode( green2 , OUTPUT );
}

void loop()
{
	digitalWrite( red1 , HIGH );
    delay( 1000 );
  	digitalWrite( red1 , LOW );
  	digitalWrite( blue2 , HIGH );
  	digitalWrite( green2 , HIGH );
  	delay( 1000 );
  	digitalWrite( blue2 , LOW );
 	digitalWrite( green2 , LOW );
  	digitalWrite( green1 , HIGH );
  	delay( 1000 );
  	digitalWrite( green1 , LOW );
  	digitalWrite( red2 , HIGH );
  	digitalWrite( blue2 , HIGH );
  	delay( 1000 );
  	digitalWrite( red2 , LOW );
  	digitalWrite( blue2 , LOW );
  	digitalWrite( blue1 , HIGH );
  	delay( 1000 );
  	digitalWrite( blue1 , LOW );
  	digitalWrite( red2 , HIGH );
  	digitalWrite( blue2 , HIGH );
  	digitalWrite( green2 , HIGH );
  	delay( 1000 );
   	digitalWrite( red2 , LOW );
  	digitalWrite( blue2 , LOW );
  	digitalWrite( green2 , LOW );
  	digitalWrite( red1 , HIGH );;
  	digitalWrite( green1 , HIGH );
  	delay( 1000 );
  	digitalWrite( red1 , LOW );;
  	digitalWrite( green1 , LOW );
  	delay( 1000 );
}