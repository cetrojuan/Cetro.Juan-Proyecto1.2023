int vec[] = { 10, 4 , 2, };
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  for(int i = 0; i < (sizeof(vec)/sizeof(int)); i++)
  {
    for(int z = i + 1; z < (sizeof(vec)/sizeof(int)); z++)
    {
      if(vec[i] > vec[z])
      {
        int a = vec[i];
        vec[i] = vec[z];
        vec[z] = a;
      }
    }
  }
  for(int i = 0; i < (sizeof(vec)/sizeof(int)); i++)
  {
    Serial.print(vec[i]);
    Serial.print(" ");
  }
  Serial.println(" ");
}
