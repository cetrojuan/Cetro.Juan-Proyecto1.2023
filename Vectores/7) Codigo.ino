#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
int lista[] = {1,1,1,1,1};
int pines[] = {led1, led2, led3, led4, led5};
int senal[] = {1, 1, 1, 1, 1};

void setup()
{
  for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ ) 
  { 
    pinMode( pines[i] , senal[i] );
  }
}

void loop()
{
  for( int i = 0 ; i < (sizeof(lista)/sizeof(int)) ; i++)
  {
    digitalWrite( pines[i], lista[i]);
    delay(1000);
  }
}