/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald

  modified 2 Sep 2016
  by Arturo Guadalupi

  modified 8 Sep 2016
  by Colby Newman
*/

int pin = 10;
int t = 300;

// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);      // open the serial port at 9600 bps:

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);  // Power Relay
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  for (int thisPin = 2; thisPin < 9; thisPin++) { //Sets all pins HIGH before the program starts
    digitalWrite(thisPin, HIGH);
  }
}

// the loop function runs over and over again forever
void loop() {

  pin = random(3, 40);       // the range adds 'silences' working range is 9 to 13
  t = random(200, 300);

  Serial.println(pin);
  Serial.println(t);

  digitalWrite(pin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(t);                       // wait for a second

  if (pin == 2) {
    Serial.println("2! ON");
  }

  if (pin == 3) {
    Serial.println("3! ON");
  }

  if (pin == 4) {
    Serial.println("4! ON");
  }

  if (pin == 5) {
    Serial.println("5! ON");
  }

  if (pin == 6) {
    Serial.println("6! ON");
  }

  if (pin == 7) {
    Serial.println("7! ON");
  }

  if (pin == 8) {
    Serial.println("8! ON");
  }

  if (pin == 9) {
    Serial.println("9! ON");
  }

  digitalWrite(pin, HIGH);    // turn the LED off by making the voltage LOW
  delay(t);

  if (pin == 2) {
    Serial.println("2! OFF");
  }

  if (pin == 3) {
    Serial.println("3! OFF");
  }

  if (pin == 4) {
    Serial.println("4! OFF");
  }

  if (pin == 5) {
    Serial.println("6! OFF");
  }

  if (pin == 7) {
    Serial.println("7! OFF");
  }

  if (pin == 8) {
    Serial.println("8! OFF");
  }

  if (pin == 9) {
    Serial.println("9! OFF");
  }


}
