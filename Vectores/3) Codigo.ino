float lista[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float mayor = 0.0;
  for(int i = 0 ; i < 10 ; i++)
  {
    if( mayor < lista[i])
    {
      mayor = lista[i];
    }
  }
  Serial.println(mayor);
  delay(1000);
}