/*Day 1-LED On/Off Using arduino uno*/
/*******************************************/

int ledPin=8; //definition digital 8 pins as pin to control the LED

void setup()
{
    pinMode(ledPin,OUTPUT);    //Set the digital 8 port mode, OUTPUT: Output mode
}

void loop()
{  
    digitalWrite(ledPin,HIGH); //HIGH is set to about 5V PIN8 
}