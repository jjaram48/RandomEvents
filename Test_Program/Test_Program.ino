
int pin = 20;
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

  for (int pin = 1; pin <= 9; pin++) { //Sets all pins HIGH before the program starts
    digitalWrite(pin, HIGH);  
  }

}

// the loop function runs over and over again forever
void loop() {

 
  for (int pin = 1; pin <= 9; pin++) { //Sets all pins HIGH before the program starts
    digitalWrite(pin, LOW);  
    
    t = 100;
    
    Serial.println(pin);
    Serial.println(t);
    
    digitalWrite(pin, LOW);   // turn the Relay on by setting the level LOW

    Serial.println(pin, "! ON");
  
    delay(t);                       // wait for the time it will be turned on (while it is activated)
    
    digitalWrite(pin, HIGH);    // turn the Relay off by making the voltage HIGH again
  
    Serial.println(pin, "! OFF");

    delay(1000); 
  }
}
