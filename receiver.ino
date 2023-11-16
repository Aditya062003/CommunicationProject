void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int rcvd = analogRead(A1);
  float volt = rcvd * (5.0/1023.0);
  Serial.println(volt);
}