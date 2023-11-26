int vector[] = {6, 10, 3, 1, 4, 5, 8, 9, 2, 7};
int longitud = (sizeof(vector)/sizeof(int));

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  ordenarVector(vector, longitud);
  for (int i = 0; i < longitud; i++) {
    Serial.print(vector[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void ordenarVector(int vector[], int longitud) 
{
  for (int i = 0; i < longitud - 1; i++) 
  {
    for (int z = i + 1; z < longitud; z++) 
    {
      if (vector[i] < vector[z]) 
      {
        int a = vector[i];
        vector[i] = vector[z];
        vector[z] = a;
      }
    }
  }
}