
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

  for (int thisPin = 4; thisPin < 13; thisPin++) { //Sets all pins HIGH before the program starts
    digitalWrite(thisPin, HIGH);
  }
}

// the loop function runs over and over again forever
void loop() {

 
  for (int pin = 4; pin < 13; pin++) {
    digitalWrite(pin, LOW);  
    
    digitalWrite(2, HIGH);    //Power Supply Relay enable
    
    t = 100;
    
    Serial.println(pin);
    Serial.println(t);
    
    digitalWrite(pin, LOW);   // turn the Relay on by setting the level LOW

    Serial.println(pin, "! ON");
  
    delay(t);                       // wait for the time it will be turned on (while it is activated)
    
    digitalWrite(pin, HIGH);    // turn the Relay off by making the voltage HIGH again
  
    Serial.println(pin, "! OFF");

    digitalWrite(2, LOW);    //Power Supply Relay disabled

      delay(1000); 
  }
}

