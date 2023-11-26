int vec[5];
int L = (sizeof(vec)/sizeof(int));
void setup() 
{
  Serial.begin(9600);
  randomSeed( analogRead(A0) );
}

void loop() 
{
  multiplos(vec,L);
  for(int i = 0 ; i < L ; i++)
  {
    Serial.print(vec[i]);
    Serial.print(" ");
  }
  Serial.println("");
}

void multiplos(int vec[], int L) 
{
  for(int i = 0 ; i < L ; i++)
  {
    int num = random(0,101);
  	int multi = num/10;
  	int comprb = 10*multi;
  	if( comprb == num )
  	{
   		vec[i] = num;
  	}
  }
}