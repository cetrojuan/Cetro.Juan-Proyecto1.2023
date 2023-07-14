#define red 3
#define blue 5
#define green 6
int pines[] = {red,blue,green};
int senal[] = {1,1,1};
int a = 0;
int b = 0;
int c = 0;
void setup()
{
	for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ ) 
  	{ 
  	  pinMode( pines[i] , senal[i] );
  	}
  Serial.begin(9600);
}

void loop()
{
  for(int r = 0 ; r <= 255 ; r++)
  {
  	for(int b = 0 ; b <= 255 ; b++)
    {
      for(int g = 0 ; g <= 255 ; g++)
      {
        analogWrite(red,r);
        analogWrite(blue,b);
        analogWrite(green,g);
        Serial.print("Red: ");
        Serial.print(r);
        Serial.print(" ");
        Serial.print("Blue: ");
        Serial.print(b);
        Serial.print(" ");
        Serial.print("Green: ");
        Serial.println(g);
        delay(2);
      }
    }
  }
  
}