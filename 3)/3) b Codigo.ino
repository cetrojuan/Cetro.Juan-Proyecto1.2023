#define boton 2
#define pot 3
#define red 4
#define blue 5
#define green 6
void setup()
{
  pinMode( boton , INPUT );
  pinMode( pot , INPUT );
  pinMode( red , OUTPUT );
  pinMode( blue , OUTPUT );
  pinMode( green , OUTPUT );
  Serial.begin( 9600 );
}

void loop()
{
  int lectura = digitalRead( boton );
  Serial.println( lectura );
   
    int redP = map(pot,0,1023,0,255);
    int blueP = map(pot,0,1023,0,255);
    int greenP = map(pot,0,1023,0,255); 
  if(lectura = HIGH){

 
    analogWrite(red, redP);
    analogWrite(green, blueP);
    analogWrite(blue, greenP);
  }
 
  else{
  analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
 
}
