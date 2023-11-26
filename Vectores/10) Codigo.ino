#define buz 3
int conteo[10];
void setup()
{
  pinMode( buz , OUTPUT );
  randomSeed( analogRead(A0) );
  Serial.begin(9600);
}

void loop()
{
  int a = 0;
  for (int i = 0; i < (sizeof(conteo)/sizeof(int)) ; i++)
  {
  	int aleatorio = random(1,11);
  	conteo[i] = aleatorio;
    delay(100);
    if(conteo[i] == 5)
  	{
    	int a = 1;
  	}
  }

  for(int z = 0; z < (sizeof(conteo)/sizeof(int)) ; z++)
  {
  	Serial.print(conteo[z]);
    Serial.print(",");
  }
 
  Serial.println("");
  if( a == 1 )
  {
    tone(buz,392);
  }
  delay(3000);
}