/* Programmer: Kaeden Lee
 * Date: 11.6.19
 * Program: Blink
 * 
 * This program will turn on an LED for specified amounts of time, turn it
 * off, then back on in a While Loop
 */

// Initialize our LED to Pin 13
int led = 13;

void setup() {
  // Using the Function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
}
