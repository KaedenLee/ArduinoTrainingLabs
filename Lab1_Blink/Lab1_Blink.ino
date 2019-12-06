/* Programmer: Kaeden Lee
   Date: 12.3.19
   Program: Potentiometer

   AnalogReadSerial
   Reads an analog input on pin A0, prints to the serial monitor

*/



void setup() {
  // Initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the input on analog pin 0
  int potentiometerValue = analogRead(A0);

  // Print the value of our Potentiometer
  Serial.println(potentiometerValue);

  // Add a delay for stability
  delay(1);
}
