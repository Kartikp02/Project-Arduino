/* Day 4-Traffic Light Circuit using Arduino uno*/

void setup()
{
  pinMode(0, OUTPUT);//initiates pin 0 as output
  pinMode(1, OUTPUT);//initiates pin 1 as output
  pinMode(2, OUTPUT);//initiates pin 2 as output
}

void loop()
{
  for (int i = 0 ; i < 10 ; i += 1) //this will flash advanced green 10
  {
    digitalWrite(2, HIGH); //turns on the green led, pin 2 is turned on
  	delay(100); //100 millisecond delay
  	digitalWrite(2, LOW); //turns off the green led, pin 2 is turned off
  	delay(100); //100 millisecond 
  }
  
  digitalWrite(2, HIGH);//turns on the green led, pin 2 is turned on
  delay(15000); // 15000 millisecond delay
  digitalWrite(2, LOW); // turns off the green led, pin 2 is turned off
  digitalWrite(1, HIGH);// turns on the yellow led, pin 1 is turned on
  delay(5000);//5000 millisecond delay
  digitalWrite(1, LOW);//turns off the yellow led, pin 1 is turned off
  digitalWrite(0, HIGH);//turns on the red led, pin 0 is turned on
  delay(15000);//15000 millisecond delay
  digitalWrite(0, LOW);//turns off the red led, pin 0 is turned off 
}