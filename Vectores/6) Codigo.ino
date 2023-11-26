int lista[] = { 2 , 6 , 10 , 11 };

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for( int i = 0 ; i < (sizeof(lista)/sizeof(int)) ; i++)
  {
    Serial.print("Multiplos de ");
    Serial.print(lista[i]);
    Serial.print(": ");
  	Serial.print(lista[i]*1);
    Serial.print(" ");
    Serial.print(lista[i]*2);
    Serial.print(" ");
    Serial.print(lista[i]*3);
    Serial.print(" ");
    Serial.print(lista[i]*4);
    Serial.print(" ");
    Serial.println(lista[i]*5);
    delay(1000);
  }
}