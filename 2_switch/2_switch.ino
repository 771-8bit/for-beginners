void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(1) == LOW) {
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(0, LOW);
  }

  /*
    if (!digitalRead(1)) {
      digitalWrite(0, HIGH);
    } else {
      digitalWrite(0, LOW);
    }
  */

  //digitalWrite(0, !digitalRead(1));
}
