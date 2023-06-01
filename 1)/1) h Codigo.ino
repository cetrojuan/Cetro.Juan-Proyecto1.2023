#define red 4
#define blue 5
#define green 6
#define boton 2

bool apretado = true;
int count = 0;
void setup()
{
	pinMode( red , OUTPUT );
  	pinMode( blue , OUTPUT );
 	pinMode( green , OUTPUT );
    pinMode( boton , INPUT );
}
void loop()
{
  if( digitalRead(boton) != HIGH && count == 0)
  {
    digitalWrite( red , HIGH );
    digitalWrite( blue , LOW );
    digitalWrite( green , LOW );
    	count += 1;
    delay(100);
  }
  
  if( digitalRead(boton) != HIGH && count == 1)
  {
    digitalWrite( red , LOW );
    digitalWrite( blue , HIGH );
    digitalWrite( green , HIGH );
    	count += 1;
    delay(100);
  }
  
  if( digitalRead(boton) != HIGH && count == 2)
  {
    digitalWrite( red , LOW );
    digitalWrite( blue , LOW );
    digitalWrite( green , HIGH );
    	count += 1;
    delay(100);
  }
  
  if( digitalRead(boton) != HIGH && count == 3)
  {
    digitalWrite( red , HIGH );
    digitalWrite( blue , HIGH );
    digitalWrite( green , LOW );
    	count += 1;
    delay(100);
  }
  
  if( digitalRead(boton) != HIGH && count == 4)
  {
    digitalWrite( red , LOW );
    digitalWrite( blue , HIGH );
    digitalWrite( green , LOW );
    	count += 1;
    delay(100);
  }
  
  if( digitalRead(boton) != HIGH && count == 5)
  {
    digitalWrite( red , HIGH );
    digitalWrite( blue , HIGH );
    digitalWrite( green , HIGH );
    	count += 1;
    delay(100);
  }
  
  if( digitalRead(boton) != HIGH && count == 6)
  {
    digitalWrite( red , HIGH );
    digitalWrite( blue , LOW );
    digitalWrite( green , HIGH );
    	count = 0;
    delay(100);
  }
}