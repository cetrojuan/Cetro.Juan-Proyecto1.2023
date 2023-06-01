#define coso 3
#define led1 4
#define led2 5
void setup()
 {
    pinMode( coso , OUTPUT );
    pinMode( led1 , OUTPUT );
    pinMode( led2 , OUTPUT );
 }

void loop()
 {
    digitalWrite( led2 , LOW );
    digitalWrite( led1 , HIGH );
    delay( 130 );
    tone(coso, 392);
    delay( 200 );
    digitalWrite( led1 , LOW );
    digitalWrite( led2 , HIGH );
    delay( 130 );
    tone(coso, 392);
    delay( 200 );
 }