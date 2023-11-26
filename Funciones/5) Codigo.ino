
void setup()
{
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop()
{
  Serial.println(dado(6));
  delay(1000);
}

int dado(int lados)
{
  int valor = random(1,lados+1);
  return valor;
}
