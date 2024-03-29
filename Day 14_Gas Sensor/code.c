//DAy-14_Gas Sensor Using Arduino Uno//

int LED = A1;
const int gas = 0;
int MQ2pin = A0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorValue,MQ2pin;
sensorValue = analogRead(MQ2pin); // read analog input pin 0

  if(sensorValue >= 470){
    digitalWrite(LED,LOW);
    Serial.print(sensorValue);
    Serial.println(" |SMOKE DETECTED");
    
  
  }
  else{
  	digitalWrite(LED,HIGH);
    Serial.println("Sensor Value: ");
    Serial.println(sensorValue);
  } 
  delay(1000);
}
	float getsensorValue(int pin){
  	return (analogRead(pin));
}