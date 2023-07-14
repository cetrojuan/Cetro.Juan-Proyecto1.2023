#define A 4
#define B 5
#define C 8
#define D 7
#define E 6
#define G 2
#define F 3
int binario[4];
int peso[] = {8,4,2,1};

int pines[] = { A, B, C, D, E, F, G, 9, 10, 11, 12 };
int senal[] = { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 };

int numeroCERO[] = {0,0,0,0,0,0,0};
int numeroUNO[] = {0,1,1,0,0,0,0};
int numeroDOS[] = {1,1,0,1,1,0,1};
int numeroTRES[] = {1,1,1,1,0,0,1};
int numeroCUATRO[] = {0,1,1,0,0,1,1};
int numeroCINCO[] = {1,0,1,1,0,1,1};
int numeroSEIS[] = {1,0,1,1,1,1,1};
int numeroSIETE[] = {1,1,1,0,0,0,0};
int numeroOCHO[] = {1,1,1,1,1,1,1};
int numeroNUEVE[] = {1,1,1,1,0,1,1};
int letraA[] = {1,1,1,0,1,1,1};
int letraB[] = {0,0,1,1,1,1,1};
int letraC[] = {1,0,0,1,1,1,0};
int letraD[] = {0,1,1,1,1,0,1};
int letraE[] = {1,0,0,1,1,1,1};
int letraF[] = {1,0,0,0,1,1,1};
int* numeros[] = {numeroCERO, numeroUNO, numeroDOS, numeroTRES, numeroCUATRO, numeroCINCO, numeroSEIS, numeroSIETE, numeroOCHO, numeroNUEVE, letraA, letraB, letraC, letraD, letraE, letraF};
void setup()
{
  for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ ) 
  { 
    pinMode( pines[i] , senal[i] );
  }
  Serial.begin( 9800 );
}

void loop()
{
	binario[0] = digitalRead(9);
  	binario[1] = digitalRead(10);
  	binario[2] = digitalRead(11);
  	binario[3] = digitalRead(12);
  	Serial.print( binario[0] );
  	Serial.print( binario[1] );
  	Serial.print( binario[2] );
  	Serial.print( binario[3] );
  
  	int dec=0;
  	for(int i = 0 ; i <= 3 ; i++)
  	{
      	dec = dec + peso[i] * binario[i];
  	}
  	Serial.print("=");
    Serial.println( dec );
  	
  	for(int asd = 0 ; asd <= 16 ; asd++ )
    {
      	for(int bec = 0 ; bec <= 7 ; bec++ )
        {
          digitalWrite(pines[bec], numeros[dec][bec]);
        }
      delay(10);
    }
}