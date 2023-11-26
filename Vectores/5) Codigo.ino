#define led1 2
#define led2 3
int lista[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
int lista2[] = { 0, 1 ,0 ,1, 0, 0, 1,0};

void setup()
{
  pinMode( led1 , OUTPUT );
  pinMode( led2 , OUTPUT );
}

void loop()
{
  for( int i = 0 ; i < (sizeof(lista)/sizeof(int)) ; i++)
  {
  	digitalWrite(led1, lista[i]);
    digitalWrite(led2, lista2[i]);
    delay(1000);
  }
}