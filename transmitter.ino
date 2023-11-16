int trns = 2;
int time = 400;

int dataarray[] = {1, 0, 0, 1, 1, 0, 1, 1};
             
void setup()
{
  pinMode(trns, OUTPUT);
}

void loop()
{
  for (int i = 0; i < sizeof(dataarray) / sizeof(dataarray[0]); i++){
    digitalWrite(trns, dataarray[i]);
  	delay(time);
  }
}