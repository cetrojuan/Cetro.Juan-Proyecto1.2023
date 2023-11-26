#include <LiquidCrystal.h>
LiquidCrystal lcd( 7,6,2,3,4,5 );

void setup()
{
  lcd.begin( 16 , 2 );
  randomSeed( analogRead(A0) );
}

void loop()
{
  bienvenida();
  delay(1500);
  inicio();
  delay(5000);
  end();
  delay(1500);
  puntaje();
  delay(3000);
}

void bienvenida()
{
  lcd.clear();
  lcd.setCursor( 3 , 0 );
  lcd.print( "BIENVENIDA" );
  lcd.setCursor( 2 , 1 );
  lcd.print( "Wait pls...." );
}

void inicio()
{
  lcd.clear();
  lcd.setCursor( 5 , 0 );
  lcd.print( "EMPIEZA" );
  lcd.setCursor( 3 , 1 );
  lcd.print( "EL JUEGO!!!" );
}

void end()
{
  lcd.clear();
  lcd.setCursor( 6 , 0 );
  lcd.print( "Final" );
  lcd.setCursor( 3 , 1 );
  lcd.print( "Wait pls..." );
}

void puntaje()
{
  int puntaje = random(0,10001);
  lcd.clear();
  lcd.setCursor( 5 , 0 );
  lcd.print( "Puntaje:" );
  lcd.setCursor( 7 , 1 );
  lcd.print( puntaje );
}






