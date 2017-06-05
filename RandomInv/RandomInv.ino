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

int pin = 9;
int t = 300; 

// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);      // open the serial port at 9600 bps:
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);  // Power Relay
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(2, HIGH);    //Power Relay init

  for (int thisPin = 7; thisPin < 13; thisPin++) { //Sets all pins HIGH before the program starts
    digitalWrite(thisPin, HIGH);
  }
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(2, LOW);    //Power Relay enable
  
  pin=random(3,40);          // the range adds 'silences' working range is 9 to 13
  t = random(200,300);
  
  Serial.println(pin);
  Serial.println(t);
  
  digitalWrite(pin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(t);                       // wait for a second

    if (pin == 7) {
    Serial.println("7! ON");
  }

    if (pin == 8) {
    Serial.println("8! ON");
  }

    if (pin == 9) {
    Serial.println("9! ON");
  }

    if (pin == 10) {
    Serial.println("10! ON");
  }

    if (pin == 11) {
    Serial.println("11! ON");
  }

    if (pin == 12) {
    Serial.println("12! ON");
  }
  
  digitalWrite(pin, HIGH);    // turn the LED off by making the voltage LOW
  delay(t);

  if (pin == 7) {
    Serial.println("7! OFF");
  }

    if (pin == 8) {
    Serial.println("8! OFF");
  }

    if (pin == 9) {
    Serial.println("9! OFF");
  }

    if (pin == 10) {
    Serial.println("10! OFF");
  }

    if (pin == 11) {
    Serial.println("11! OFF");
  }

    if (pin == 12) {
    Serial.println("12! OFF");
  }

  digitalWrite(2, HIGH);    //Power Relay disabled
  
  delay(100); 
}

