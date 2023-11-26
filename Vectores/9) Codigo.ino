#define r 2
#define b 5
#define g 6
int L1[] = {122 , 234 , 21};
int L2[] = {33  , 53  , 155};
int L3[] = {200 , 255 , 12};
int* colores[] = {L1, L2, L3};
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop()
{
  for(int i = 0 ; i < (sizeof(colores)/sizeof(int)) ; i++)
  {
    analogWrite(r, colores[i][0]);
    analogWrite(b, colores[i][1]);
    analogWrite(g, colores[i][2]);
    delay(3000);
  }
}