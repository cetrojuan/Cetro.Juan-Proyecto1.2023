void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int a = 11;
  int b = 4;
  multiplos(a,b);
}

void multiplos(int a, int b) 
{
  int c = a/b;
  int d = b*c;
  if( a == d )
  {
    Serial.print(a);
    Serial.print(" Es multiplo de ");
    Serial.println(b);
  }else
  {
    Serial.print(a);
    Serial.print(" NO es multiplo ");
    Serial.println(b);
  }
}