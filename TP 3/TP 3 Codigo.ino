#define red 3
#define blue 5
#define green 6
#define bot 2
#define pot1 A0
#define pot2 A1
#define pot3 A2
int pines[] = {red,blue,green,bot,pot1,pot2,pot3};
int senal[] = {1,1,1,0,0,0,0};
void setup()
{
  for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ ) 
  { 
    pinMode( pines[i] , senal[i] );
  }
  Serial.begin( 9600 );
}

void loop()
{
  int lectura = digitalRead( bot );
  if(lectura != HIGH)
  {
  Serial.println("Tiene 10 s para configurar el color del led....");
  delay(10000);
  int a = analogRead( pot1 );
  int b = analogRead( pot2 );
  int c = analogRead( pot3 );
  int Aa = map( a , 0 , 1023 , 0 , 255 );
  int Bb = map( b , 0 , 1023 , 0 , 255 );
  int Cc = map( c , 0 , 1023 , 0 , 255 );
  Serial.print("El led esta usando esta configuracion de colores RGB: (");
  Serial.print(Aa);
  Serial.print(";");
  Serial.print(Bb);
  Serial.print(";");
  Serial.print(Cc);
  Serial.println(")");
  analogWrite( red , Aa );
  analogWrite( blue , Bb );
  analogWrite( green , Cc );
  }
}