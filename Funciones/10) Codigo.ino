void setup() 
{
  int a = 6;
  int b = 13;
  pines(a, b);
}

void loop() 
{
}

void pines(int a, int b)
{
  pinMode(a,INPUT);
  pinMode(b,OUTPUT);
}