#define boton 2
#define buzzer 3
void setup()
{
	pinMode( boton , INPUT );
    pinMode( buzzer , OUTPUT );
}
void loop()
{
 int a = digitalRead(boton);

  
  if( a == HIGH )
  {
  	 noTone(buzzer);
  }else{
     tone(buzzer , 440);
     delay( 800 );
     noTone(buzzer);
     delay( 800 );
  }
}