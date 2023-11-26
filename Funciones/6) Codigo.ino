int vec[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
void setup()
{
}

void loop()
{
  int L = (sizeof(vec)/sizeof(int));
  vectores(vec, L);
}

void vectores( int vec[], int L )
{
  for(int i = 0 ; i < L ; i++)
  {
    digitalWrite(vec[i],HIGH);
  }
}