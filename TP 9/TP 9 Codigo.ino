#define Aa1 2
#define B1 3
#define C1 6
#define D1 5
#define E1 4
#define Ff1 A4
#define G1 A5
#define A2 9
#define B2 10
#define C2 13
#define D2 12
#define E2 11
#define F2 8
#define G2 7
#define bot A1
#define ton A3
int pines1[] = { Aa1, B1, C1, D1, E1, Ff1, G1 };
int senal1[] = { 1 , 1 , 1 , 1 , 1 , 1 , 1  };
int pines2[] = { A2, B2, C2, D2, E2, F2, G2 };
int senal2[] = { 1 , 1 , 1 , 1 , 1 , 1 , 1  };

int numeroUNO1[] = {0,1,1,0,0,0,0};
int numeroDOS1[] = {1,1,0,1,1,0,1};
int numeroTRES1[] = {1,1,1,1,0,0,1};
int numeroCUATRO1[] = {0,1,1,0,0,1,1};
int numeroCINCO1[] = {1,0,1,1,0,1,1};
int numeroSEIS1[] = {1,0,1,1,1,1,1};

int numeroUNO2[] = {0,1,1,0,0,0,0};
int numeroDOS2[] = {1,1,0,1,1,0,1};
int numeroTRES2[] = {1,1,1,1,0,0,1};
int numeroCUATRO2[] = {0,1,1,0,0,1,1};
int numeroCINCO2[] = {1,0,1,1,0,1,1};
int numeroSEIS2[] = {1,0,1,1,1,1,1};

int* numeros1[] = {0, numeroUNO1, numeroDOS1, numeroTRES1, numeroCUATRO1, numeroCINCO1, numeroSEIS1};
int* numeros2[] = {0, numeroUNO2, numeroDOS2, numeroTRES2, numeroCUATRO2, numeroCINCO2, numeroSEIS2};
void setup()
{

  randomSeed( analogRead(A0) );
  randomSeed( analogRead(A0) );
  for( int i = 0 ; i < (sizeof(pines1)/sizeof(int)) ; i++ ) 
  { 
    pinMode( pines1[i] , senal1[i] );
  }
  
  for( int y = 0 ; y < (sizeof(pines2)/sizeof(int)) ; y++ ) 
  { 
    pinMode( pines2[y] , senal2[y] );
  }
  
  pinMode( bot , INPUT );
  pinMode( ton , OUTPUT );
  
  Serial.begin(9600);
}

void loop()
{
  int lectura = digitalRead( bot );
  Serial.println(lectura);
  
  if( lectura != HIGH )
  {
  	int aleatorio1 = random(1,7);
  	int aleatorio2 = random(1,7);
  	int a = aleatorio1 + aleatorio2;
  	Serial.println(a);
  
  	for(int palmi1=0 ; palmi1 < 6 ; palmi1++ )
  	{
    	for(int sufa1=0 ; sufa1 <= 7 ; sufa1++ )
  		{ 
   		digitalWrite( pines1[sufa1] , numeros1[aleatorio1][sufa1] );
  		}
      	delay(10);
  	}
  	for(int palmi2=0 ; palmi2 < 6 ; palmi2++ )
  	{
    	for(int sufa2=0 ; sufa2 <= 7 ; sufa2++ )
  		{ 
   		digitalWrite( pines2[sufa2] , numeros2[aleatorio2][sufa2] );
  		}
    	delay(10);
  	}
  	if( a == 7 )
  	{
    	analogWrite( ton , 523.25 );
  	}
  	delay(1000);
  }
  analogWrite( ton , LOW );
}