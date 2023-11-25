#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int musica[] = {NOTE_F4, NOTE_C4, NOTE_GS3, NOTE_F3};
int figura[] = {2, 2, 2, 2};
int musica2[] = {NOTE_B3, NOTE_AS3, NOTE_AS3, NOTE_GS3, NOTE_DS3, NOTE_E3 };
int figura2[] = {4,2,4,4,4,4};
int musica3[] = {NOTE_C4, NOTE_AS3, NOTE_GS3, NOTE_AS3, NOTE_C4, NOTE_DS3, NOTE_F3, NOTE_GS3, NOTE_F3, NOTE_DS3, NOTE_F4, NOTE_DS4, NOTE_C4, NOTE_AS3, NOTE_GS3, NOTE_F3};
int figura3[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4,1};
int musica4[] = {NOTE_G3, NOTE_GS3, NOTE_AS3};
int figura4[] = {1,1,2};
int musica5[] = {NOTE_C4, NOTE_AS3, NOTE_F4, NOTE_C4, NOTE_E4, NOTE_CS4, NOTE_C4};
int figura5[] = {2,2,2,2,2,2,2};
int musica6[] = {NOTE_CS5, NOTE_C5, NOTE_CS5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C4, NOTE_GS4, NOTE_F4, NOTE_G4, NOTE_G4};
int figura6[] = {4,4,4,2,2,2,2,2,4,1,4};
int musica7[] = {NOTE_GS4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_GS4, NOTE_F4, NOTE_G4};
int figura7[] = {2,4,1,4,2,4,2};
int musica8[] = {NOTE_CS5, NOTE_C5, NOTE_CS5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C4, NOTE_GS4, NOTE_AS4, NOTE_G4, NOTE_G4};
int figura8[] = {4,4,4,2,2,2,2,2,4,1,4};
int musica9[] = {NOTE_GS4, NOTE_AS4, NOTE_G4, NOTE_G4, NOTE_GS4, NOTE_AS4, NOTE_C5};
int figura9[] = {2,4,1,4,2,4,2};
int musica10[] = {NOTE_CS5, NOTE_C5, NOTE_CS5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C4, NOTE_GS4, NOTE_F4, NOTE_G4, NOTE_G4};
int figura10[] = {4,4,4,2,2,2,2,2,4,1,4};
int musica11[] = {NOTE_GS4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_GS4, NOTE_F4, NOTE_G4};
int figura11[] = {2,4,1,4,2,4,2};
int musica12[] = {NOTE_CS5, NOTE_C5, NOTE_CS5, NOTE_C5, NOTE_F5, NOTE_AS4, NOTE_GS4, NOTE_AS4, NOTE_GS4, NOTE_AS4, NOTE_GS4, NOTE_AS4, NOTE_B4, NOTE_AS4, NOTE_GS4, NOTE_E4, NOTE_C4, NOTE_CS4, NOTE_E4, NOTE_F4}; 
int figura12[] = {4,4,4,2,2,2,2,4,2,1,4,4,4,4,2,2,2,2,2,2};

float t = 0.5;
void setup()
{
	pinMode( 6 , OUTPUT );
}

void loop()
{
  	for (int i = 0; i <(sizeof(musica)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica[i] , (1000 / figura[i]) );
      float tempo = (1000/figura[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica2)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica2[i] , (1000 / figura2[i]) );
      float tempo = (1000/figura2[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica3)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica3[i] , (1000 / figura3[i]) );
      float tempo = (1000/figura3[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica4)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica4[i] , (1000 / figura4[i]) );
      float tempo = (1000/figura4[i] * t);
      delay(tempo);
    }
  	delay(200);
  	for (int i = 0; i <(sizeof(musica5)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica5[i] , (1000 / figura5[i]) );
      float tempo = (1000/figura5[i] * t);
      delay(tempo);
    }
  	delay(200);
  	for (int i = 0; i <(sizeof(musica6)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica6[i] , (1000 / figura6[i]) );
      float tempo = (1000/figura6[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica7)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica7[i] , (1000 / figura7[i]) );
      float tempo = (1000/figura7[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica8)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica8[i] , (1000 / figura8[i]) );
      float tempo = (1000/figura8[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica9)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica9[i] , (1000 / figura9[i]) );
      float tempo = (1000/figura9[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica10)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica10[i] , (1000 / figura10[i]) );
      float tempo = (1000/figura10[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica11)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica11[i] , (1000 / figura11[i]) );
      float tempo = (1000/figura11[i] * t);
      delay(tempo);
    }
  	delay(100);
  	for (int i = 0; i <(sizeof(musica12)/sizeof(int) ) ; i++)
    {
      tone( 6 , musica12[i] , (1000 / figura12[i]) );
      float tempo = (1000/figura12[i] * t);
      delay(tempo);
    }
  	delay(2000);
    //  1 =  1000/1   ->  1000 redonda
	//  2 =  1000/2   ->   500 blanca
	//  4 =  1000/4   ->   250 negra
	//  8 =  1000/8   ->   125 corchea
	// 16 =  1000/16  ->   62 semi-corchea
  		// parlante , nota , duración
  		//tone( 6 , NOTE_A4 , 1000 );
  		
  		
}