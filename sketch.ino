const int proxPin = 8;
const int ledPin = 13;

void setup() {
  pinMode(proxPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== BAI 4.2: CAM BIEN TIEM CAN ===");
}

void loop() {
  if (digitalRead(proxPin) == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Phat hien vat tiem can!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}
