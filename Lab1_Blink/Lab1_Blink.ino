/* Programmer: Kaeden Lee
   Date: 12.3.19
   Program: Potentiometer

   AnalogReadSerial
   Reads an analog input on pin A0, prints to the serial monitor
   
   
   Update: 12.10.19
   Add serial read to be able to read voltages from 0 to 5 volts
*/



void setup() {
  // Initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the input on analog pin 0
  int potentiometerValue = analogRead(A0);

  //Convert the analog read from 0 - 1023 to 0 - 5 Volts
  float voltage = potentiometerValue * (5.0 / 1023.0);

  // Print the value of our Potentiometer
  Serial.println(voltage);

  // Add a delay for stability
  delay(1);
}
