/*Day 3-Blinking 5 LEDs Using arduino uno*/
/*******************************************/

int ledPin1=2; //definition digital 2 pins as pin to control the LED
int ledPin2=3; //definition digital 3 pins as pin to control the LED
int ledPin3=4; //definition digital 4 pins as pin to control the LED
int ledPin4=5; //definition digital 5 pins as pin to control the LED
int ledPin5=6; //definition digital 6 pins as pin to control the LED
void setup()
{
    pinMode(ledPin1,OUTPUT);//Set the digital 2 port mode, OUTPUT: Output mode
  	pinMode(ledPin2,OUTPUT);
  	pinMode(ledPin3,OUTPUT);
   	pinMode(ledPin4,OUTPUT);
   	pinMode(ledPin5,OUTPUT);
  
}

void loop()
{  
    digitalWrite(ledPin1,HIGH); //HIGH is set to about 5V PIN8  
  	delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin1,LOW);  //LOW is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
  
  digitalWrite(ledPin2,HIGH); //HIGH is set to about 5V PIN8  
  	delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin2,LOW);  //LOW is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
  
  digitalWrite(ledPin3,HIGH); //HIGH is set to about 5V PIN8  
  	delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin3,LOW);  //LOW is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
  
  digitalWrite(ledPin4,HIGH); //HIGH is set to about 5V PIN8  
  	delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin4,LOW);  //LOW is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
  
  digitalWrite(ledPin5,HIGH); //HIGH is set to about 5V PIN8  
  	delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin5,LOW);  //LOW is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
  
}