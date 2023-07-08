#define red1 6
#define blue1 5
#define red2 4
#define green 3
#define blue2 9
#define pot 10
#define bot 2
void setup()
{
	pinMode( red1 , OUTPUT );
  	pinMode( blue1 , OUTPUT );
 	pinMode( red2 , OUTPUT );
  	pinMode( green , OUTPUT );
  	pinMode( blue2 , OUTPUT );
  	pinMode( pot , INPUT );
  	pinMode( bot , INPUT );
}

void loop()
{
  	int a = analogRead(pot);
  	int aA = (a,0,1023,0,1000);
  	int b = digitalRead(bot);
  	while(b == 0)
    {
     int b = digitalRead(bot);
      if( b == 1){break;}
	analogWrite( red1 , 255 );
  	delay( a );
      if( b == 1){break;}
	analogWrite( red1 , 0 );
  	delay( a );
      if( b == 1){break;}
 	digitalWrite( blue1 , HIGH );
 	digitalWrite( red2 , HIGH );
  	delay( a );
      if( b == 1){break;}
 	digitalWrite( blue1 , LOW );
 	digitalWrite( red2 , LOW );
  	delay( a );
      if( b == 1){break;}
  	analogWrite( green , 100 );
  	analogWrite( blue2 , 100 );
  	delay( a );
      if( b == 1){break;}
  	analogWrite( green , 0 );
 	analogWrite( blue2 , 0 );
  	delay( a );
    }
    
}