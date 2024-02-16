//Day-16_Keypad Lcd Display using Arduino Uno//

#include<Keypad.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);

const byte row = 4;//the keypad has 4 rows
const byte col = 4;//the keypad has 4 columns

char keys[row][col] = {   // declares the keymap

  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'.','0','#','D'},
};

 byte rowpins[4] = {12,11,10,9}; //rows are connected to these arduino pins
byte  colpins[4] = {8,7,6,5};//columns are connected to these arduino pins

Keypad keypad = Keypad(makeKeymap(keys),rowpins,colpins,row,col);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("hello");
}

void loop()
{
  char input = keypad.getKey();
  if(input){
    
    lcd.println(input);
   Serial.print(input);
  }
}