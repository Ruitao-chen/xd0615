int i=0;
void setup()
{
  for(i=0;i<9;i++)
  {
     pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<9;i++)
  {
     digitalWrite(i, HIGH);
     delay(200); // Wait for 1000 millisecond(s)
     digitalWrite(i, LOW);
     delay(200); // Wait for 1000 millisecond(s)
  }
  for(i=0;i<9;i++)
  {
     digitalWrite(9-i, HIGH);
     delay(200); // Wait for 1000 millisecond(s)
     digitalWrite(9-i, LOW);
     delay(200); // Wait for 1000 millisecond(s)
  }
}