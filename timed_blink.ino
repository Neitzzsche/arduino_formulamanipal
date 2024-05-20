const int ledPin = 13;
const int numBlinks = 5; 

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  
  for (int i = 0; i < numBlinks; ++i) {
    digitalWrite(ledPin, HIGH); 
    delay(500); 
    digitalWrite(ledPin, LOW); 
    delay(500);
  }

  
  for (int i = 0; i < numBlinks; ++i) {
    digitalWrite(ledPin, HIGH); 
    delay(2000); 
    digitalWrite(ledPin, LOW); 
    delay(2000); 
  }
}
