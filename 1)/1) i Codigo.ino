#define led1 3
#define led2 4
#define led3 5
#define led4 6
#define led5 7
#define led6 8
#define led7 9
#define led8 10
#define led9 11
#define led10 12
#define boton 2

bool apretado = false;
int count = 0;
void setup()
{
	pinMode( led1 , OUTPUT );
  	pinMode( led2 , OUTPUT );
 	pinMode( led3 , OUTPUT );
  	pinMode( led4 , OUTPUT );
  	pinMode( led5 , OUTPUT );
 	pinMode( led6 , OUTPUT );
  	pinMode( led7 , OUTPUT );
  	pinMode( led8 , OUTPUT );
 	pinMode( led9 , OUTPUT );
  	pinMode( led10 , OUTPUT );
    pinMode( boton , INPUT );
}
void loop()
{
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led1, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led2, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led3, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led4, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led5, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led6, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led7, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led8, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led9, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led10, HIGH );
    delay( 1000 );
  }
  if( digitalRead(boton) != HIGH)
  {
    count = 1; 
  }else{
    count = 0;
  }
  if(count == 0)
  {
    digitalWrite( led1, LOW );
    digitalWrite( led2, LOW );
    digitalWrite( led3, LOW );
    digitalWrite( led4, LOW );
    digitalWrite( led5, LOW );
    digitalWrite( led6, LOW );
    digitalWrite( led7, LOW );
    digitalWrite( led8, LOW );
    digitalWrite( led9, LOW );
    digitalWrite( led10, LOW );
    delay( 1000 );
  }
}
