void setup() 
{
  Serial.begin(115200);   // Setting the baud rate to 115200
  delay(1000);
  pinMode(2,OUTPUT);      // Setting the pin 2 as the output pin.
  digitalWrite(2,HIGH);   // Making it low on relay
  pinMode(3,OUTPUT);      // Setting the pin 3 as the output pin..
  digitalWrite(3,HIGH);   // Making it low on relay
  Serial.write("All set! Waiting for the serial data...\n");
}

void loop() 
{
  byte byteRead;
  if(Serial.available()) // Checking whether the data is being sent through the serial monitor
  { 
      byteRead = Serial.read();
      int pinNumber = (byteRead-48);       // ACII of 0 is 48
      digitalWrite(pinNumber, !digitalRead(pinNumber)); // This will toggle the pin
      Serial.write("One pin is toggled\n");
}

}

