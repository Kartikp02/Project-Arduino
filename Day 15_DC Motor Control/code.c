//Day-15_DC Motor Control Using Arduino uno//

int motorPin = 3;  

void setup()
{
 pinMode(motorPin, OUTPUT); 
}

void loop()               
{
  motorAcceleration();
}


void motorOnThenOff(){
  int onTime = 2500;  //the number of milliseconds for the motor to turn on for
  int offTime = 1000; //the number of milliseconds for the motor to turn off for
  
  digitalWrite(motorPin, HIGH); // turns the motor On
  delay(onTime);                // waits for onTime milliseconds
  digitalWrite(motorPin, LOW);  // turns the motor Off
  delay(offTime);               // waits for offTime milliseconds
}


void motorOnThenOffWithSpeed(){
  
  int onSpeed = 200;  // a number between 0 (stopped) and 255 (full speed) 
  int onTime = 2500;  //the number of milliseconds for the motor to turn on for
  
  int offSpeed = 50;  // a number between 0 (stopped) and 255 (full speed) 
  int offTime = 1000; //the number of milliseconds for the motor to turn off for
  
  analogWrite(motorPin, onSpeed);   // turns the motor On
  delay(onTime);                    // waits for onTime milliseconds
  analogWrite(motorPin, offSpeed);  // turns the motor Off
  delay(offTime);                   // waits for offTime milliseconds
}


void motorAcceleration(){
  int delayTime = 50; //milliseconds between each speed step
  
  //Accelerates the motor
  for(int i = 0; i < 256; i++){ //goes through each speed from 0 to 255
    analogWrite(motorPin, i);   //sets the new speed
    delay(delayTime);           // waits for delayTime milliseconds
  }
  
  //Decelerates the motor
  for(int i = 255; i >= 0; i--){ //goes through each speed from 255 to 0
    analogWrite(motorPin, i);   //sets the new speed
    delay(delayTime);           // waits for delayTime milliseconds
  }
}
