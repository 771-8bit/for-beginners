bool pushed = false;

void setup() {
  pinMode(1, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(1) == LOW) {
    if (pushed == false) {
      Serial.println("pushed");
    }
    pushed = true;
  } else {
    pushed = false;
  }


  // "digitalRead(1) == LOW" -> "!digitalRead(1)"
  // "pushed == false" -> "!pushed"
}
