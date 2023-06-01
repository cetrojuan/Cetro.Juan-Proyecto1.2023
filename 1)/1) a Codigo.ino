#define led1 1
#define led2 2
#define led3 3
#define led4 4
#define led5 5
void setup()
{
	pinMode( led1 , OUTPUT );
    pinMode( led2 , OUTPUT );
    pinMode( led3 , OUTPUT );
  	pinMode( led4 , OUTPUT );
  	pinMode( led5  , OUTPUT );
}

void loop()
{
	digitalWrite( led1, HIGH );
  	digitalWrite( led4, HIGH );
    delay(1500);
  	digitalWrite( led1, LOW );
  	digitalWrite( led2, HIGH );
  	delay(1000);
  	digitalWrite( led2, LOW );
  	digitalWrite( led3, HIGH );
  	digitalWrite( led4, LOW );
  	digitalWrite( led5, HIGH );
  	delay(1500);
  	digitalWrite( led2, HIGH );
  	delay(1000);
  	digitalWrite( led1, HIGH );
  	digitalWrite( led2, LOW );
    digitalWrite( led3, LOW );
  	digitalWrite( led4, HIGH );
  	digitalWrite( led5, LOW );
  	
}