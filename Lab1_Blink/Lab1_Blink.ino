/* Programmer: Kaeden Lee
 * Date: 11.6.19
 * Program: Blink
 * 
 * This program will turn on an LED for specified amounts of time, turn it
 * off, then back on in a While Loop
 * 
 * Merged on 12.2.19
 * 
 * Programmer: Kaeden Lee
 * Date: 11.14.19
 * Program: DigitalRead() & the Serial Port
 * 
 * Reads a digital input on pin2, prints the result
 *
 */

// Initialize our LED to Pin 13
int led = 13;

//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  // Using the Function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

  //initializes serial communication at 9600 bits per second
  Serial.begin(9600);
 //make the pushButton pin an input
 pinMode(pushButton, INPUT);
}

void loop() {
  // read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button
  Serial.println(buttonState);
  // IF buttonState is True/Pushed by human the LED with Blink
  if (buttonState==HIGH){
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
  }
  delay(1); // delay in between readings for stability
}
