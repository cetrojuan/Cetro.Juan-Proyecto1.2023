#include <Servo.h>
#define ldr A0
#define motor1 3
#define motor2 5
#define PIR1 2
#define PIR2 4
#define TIP120 6
Servo motorcito1;
Servo motorcito2;
void setup()
{
  motorcito1.attach(motor1);
  motorcito2.attach(motor2);
  pinMode(TIP120, OUTPUT);
  pinMode( ldr , INPUT );
  motorcito1.write(90);
  motorcito2.write(90);
}

void loop()
{
  int sensor1 = digitalRead(PIR1);
  int sensor2 = digitalRead(PIR2);
  int aux = analogRead( ldr );
  int luminocidad = map(aux, 0 , 1022 , 0 , 1 );
  apertura(sensor1);
  cierre(sensor2);
  ilum(luminocidad);
}

void apertura(int sensor1)
{
  if(sensor1 == 1)
  {
  	motorcito1.write(360);
  	motorcito2.write(0);
  }
}

void cierre(int sensor2)
{
  if(sensor2 == 1)
  {
  	motorcito1.write(90);
  	motorcito2.write(90);
  }
}

void ilum(int luminocidad)
{
  if(luminocidad == 1)
  {
    analogWrite(TIP120,255);
  }else{
    analogWrite(TIP120,0);
  }
}