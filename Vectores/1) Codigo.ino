int lista[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

void setup()
{
  Serial.begin( 9800 );
}

void loop()
{
  int suma = 0;
  for(int i = 0 ; i < (sizeof(lista)/sizeof(int)) ; i++ )
  {
    suma = suma + lista[i];
  }
  int prom = suma/10;
  Serial.println(prom);
  delay(1000);
}