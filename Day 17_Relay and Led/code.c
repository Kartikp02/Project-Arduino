//Day-17_Relay and Led Using Arduino uno//

void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(11, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
}