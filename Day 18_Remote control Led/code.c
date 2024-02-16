// Day-18_Remote control Led Using Arduino uno//
#include <IRremote.h>
int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop()
{
  if (irrecv.decode(&results)) // checking signal is received or not
  {
    Serial.println(results.value, DEC);
    switch (results.value)
    {
    case 16582903: // Button 1
      Serial.println("1");
      Serial.println("red led on");
      digitalWrite(5, HIGH);
      break;
    case 16615543: // Button 2
      Serial.println("2");
      Serial.println("red led off");
      digitalWrite(5, LOW);
      break;
    case 16599223: // Button 3
      Serial.println("3");
      Serial.println("green led on");
      digitalWrite(6, HIGH);
      break;
    case 16591063: // Button 4
      Serial.println("4");
      Serial.println("green led off");
      digitalWrite(6, LOW);
      break;
    case 16623703: // Button 5
      Serial.println("5");
      Serial.println("blue led on");
      digitalWrite(7, HIGH);
      break;
    case 16607383: // Button 6
      Serial.println("6");
      Serial.println("blue led off");
      digitalWrite(7, LOW);
      break;
    }
    irrecv.resume();
  }
  delay(1);
} // Day-19_Air Quality Sensor Using Arduino Uno//

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int analogPin = A0;
int val = 0; // store the value read

void setup()
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("What is the air ");
  lcd.setCursor(0, 1);
  lcd.print("quality today?");
  Serial.begin(9600);
  lcd.display();
}

void loop()
{
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  delay(100);
  val = analogRead(analogPin); // read the input pin
  Serial.println(val);         // debug value
  lcd.clear();
  if (val > 000 && val <= 306)
  {
    lcd.print("Normal");
  }
  else if (val > 307 && val <= 420)
  {
    lcd.print("poor air quality");
  }
  else if (val > 421 && val <= 520)
  {
    lcd.print("Harmful  Air");
    lcd.setCursor(0, 1);
    lcd.print("Detected");
  }
  else if (val > 521 && val <= 724)
  {
    lcd.print("EMERGENCY!");
  }
}
