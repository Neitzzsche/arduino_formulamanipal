const int ledPin = 13;

void setup() {
  
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  if (Serial.available>0) {
    char receivedChar = Serial.read(); 
    if (receivedChar == '1') {
      digitalWrite(ledPin, HIGH); 
      Serial.println("LED turned ON");
    } else if (receivedChar == '0') {
      digitalWrite(ledPin, LOW); 
      Serial.println("LED turned OFF");
    }
  }
  
}
