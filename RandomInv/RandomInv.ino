int pin = 9;
int t = 300; 

// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);      // open the serial port at 9600 bps:
  
  // initialize digital pin LED_BUILTIN as an output.
  
  pinMode(2, OUTPUT);  // Power Relay 
 
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(2, HIGH);    //Power Relay init

  for (int thisPin = 5; thisPin < 13; thisPin++) { //Sets all pins HIGH before the program starts
    digitalWrite(thisPin, HIGH);
  }
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(2, HIGH);    //Power Relay enable
  
  pin=random(4,1000);          // the range adds 'silences' working range is 5 to 12 (for relays)
  t = random(300,500);
  
  Serial.println(pin);
  Serial.println(t);
  
  digitalWrite(pin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(t);                       // wait for a second

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

    if (pin == 5) {
    Serial.println("5! OFF");
  }

    if (pin == 6) {
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

    if (pin == 10) {
    Serial.println("10! OFF");
  }

    if (pin == 11) {
    Serial.println("11! OFF");
  }

    if (pin == 12) {
    Serial.println("12! OFF");
  }

  digitalWrite(2, LOW);    //Power Relay disabled
 
}

