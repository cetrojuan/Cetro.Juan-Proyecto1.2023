#define led 2
float lista[] = { 1, 0 ,0 ,1, 1, 0, 1,1};

void setup()
{
  pinMode( led , OUTPUT );
}

void loop()
{
  for( int i = 0 ; i < (sizeof(lista)/sizeof(int)) ; i++)
  {
  	digitalWrite(led, lista[i]);
    delay(1000);
  }
}