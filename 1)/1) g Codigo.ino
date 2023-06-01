#define boton 2
#define Led1 3
#define Led2 4
#define Led3 5

bool apretado = false;
int count = 0;
void setup()
{
	pinMode( Led1 , OUTPUT );
  	pinMode( Led2 , OUTPUT );
  	pinMode( Led3 , OUTPUT );
  	pinMode( boton , INPUT );
  	digitalWrite( Led1 , HIGH );
    digitalWrite( Led2 , HIGH  );
    digitalWrite( Led3 , HIGH  );
}
void loop()
    {
  
  if( digitalRead(boton) != HIGH && count == 0)
  {
  	digitalWrite( Led1 , HIGH );
    digitalWrite( Led2 , LOW  );
    digitalWrite( Led3 , LOW  );
	count += 1;
    delay(50);
  }
    
  if( digitalRead(boton) != HIGH && count == 1)
  {
  	digitalWrite( Led1 , LOW );
    digitalWrite( Led2 , HIGH  );
    digitalWrite( Led3 , LOW  );
	count += 1;
    delay(50);
  }
  if( digitalRead(boton) != HIGH && count == 2)
  {
  	digitalWrite( Led1 , LOW );
    digitalWrite( Led2 , LOW  );
    digitalWrite( Led3 , HIGH  );
	count =0;
    delay(50);
  }
}
