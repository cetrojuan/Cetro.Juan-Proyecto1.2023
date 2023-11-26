#define trig 5
#define echo 7
void setup()
{
  pinMode( trig , OUTPUT );
  pinMode ( echo , INPUT );
  Serial.begin( 9600 );
}

void loop()
{
  deteccion();
  delay(500);
}

void deteccion()
{
  digitalWrite(trig, LOW);
  
  digitalWrite( trig , HIGH);
  delayMicroseconds(3); // 1000 -> delay(1);
  digitalWrite( trig , LOW);
  delayMicroseconds(3);
  
  // no abusar de esta funcion
  // traba el arduino
  float tiempo = pulseIn( echo , HIGH );
  //
  float distancia = tiempo * 0.034 / 2;
  Serial.print("Distancia:");
  Serial.println(distancia);
}