#define buzzer 1
#define led1 2
#define led2 3
void setup()
{
  pinMode( buzzer , OUTPUT );
  pinMode( led1 , OUTPUT );
  pinMode( led2 , OUTPUT );
}

void loop()
{
  digitalWrite( led1 , HIGH );
  digitalWrite( led2 , LOW );
  tone( buzzer , 587 );
  delay( 500 );
  digitalWrite( led1 , LOW );
  digitalWrite( led2 , HIGH );
  tone( buzzer , 587 );
  delay( 500 );
}
