#define luz A0
#define temp A1
#define red 3
#define blue 5
#define green 6
int pines[] = {luz,temp,red,blue,green};
int senal[] = {0,0,1,1,1};
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
  int aux = analogRead( luz );
  int luminocidad = map(aux, 0 , 1022 , 0 , 1 );
  Serial.print("El nivel de luz actual es: ");
  Serial.println( luminocidad );
  
  int senal = analogRead( temp );
  float volt = (senal * 5.0 / 1024);
  float temperatura = ( volt * 100 - 50);
  Serial.print("La temperatura actual es: ");
  Serial.print(temperatura);
  Serial.println(" C");
  
  if(temperatura > 90 and luminocidad == 0)
  {
    analogWrite(red,255);
  }else
  {
    analogWrite(red,0);
  }
  if(temperatura < 18 and luminocidad == 0)
  {
    analogWrite(blue,255);
  }else
  {
     analogWrite(blue,0);
  }
  if(temperatura >= 18 and luminocidad == 0 and temperatura <= 90)
  {
    analogWrite(green,255);
  }else{
    analogWrite(green,0);
  }
}