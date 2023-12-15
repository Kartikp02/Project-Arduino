//Day 7-Distance Measurement Using Arduino uno//

#include <LiquidCrystal_I2C.h> //required library 

LiquidCrystal_I2C lcd(0x20, 16, 2); //(Address,Column,Row)

#define echoPin 2 // Connect echoPin to D2 pin of arduino
#define trigPin 3 // Connect trigPin to D3 pin of arduino

long duration; // Declare variable to store echo time duration
			
int distance; // Declare variable to store the result (distance)
			

void setup()
{
	lcd.init(); // initialize the lcd
	lcd.backlight(); // Turn on the Backlight

	pinMode(trigPin,OUTPUT); // Set the trigPin as an OUTPUT
			
	pinMode(echoPin, INPUT); // Set the echoPin as an INPUT

	// Serial Communication is starting with 9600 of baudrate speed
	Serial.begin(9600); 

	// The text to be printed in serial monitor									 
	Serial.println("Distance measurement :"); 
	delay(500); // delay between the print of the message and distance count
}

void loop()
{
	digitalWrite(trigPin, LOW); //sets the trigPin to low initially
  
	delayMicroseconds(2); //waits for 2uS
  
	digitalWrite(trigPin, HIGH); //sets the trigPin to high
  
	delayMicroseconds(10); //waits for 10uS
  
	digitalWrite(trigPin, LOW); //sets the trigPin to low again 
  
	duration = pulseIn(echoPin, HIGH); //records the time for which the echoPin is set high
  
	distance = duration * 0.0344 / 2; //estimates the object distance based on the duration
  
	Serial.print("Distance: ");
	Serial.print(distance);
	Serial.println(" cm");

	lcd.clear(); // Clear the display buffer
  
	lcd.setCursor(0, 0); // Set cursor for "Distance is:" (Column, Row)
  
	lcd.print("Distance is :"); // print "Distance is:" at (0, 0)
  
	lcd.setCursor(0,1); // Set cursor for output value (0, 1)
  
				
	lcd.print(distance); // print Output in cm at (0, 1)
	lcd.setCursor(4,1); // move cursor to (4, 1)
	lcd.print("cm"); // print "cm" at (4, 1)

	delay(1000);
	  if(distance<90||distance>300){ //fixes the distance range
        delayMicroseconds(1);
    tone(7,400,100); //sets the buzzer to high
   }
  
  else{
    noTone(7); //sets the buzzer to low
  }
  
}
