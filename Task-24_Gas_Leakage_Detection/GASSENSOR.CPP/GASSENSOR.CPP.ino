int gasSensor = A0;
int buzzer = 8;
int led = 7;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  if (gasValue > 400) {
    digitalWrite(led, HIGH);
    tone(buzzer, 1000);
    Serial.println("Gas Leakage Detected!");
  } else {
    digitalWrite(led, LOW);
    noTone(buzzer);
    Serial.println("Safe");
  }

  delay(500);
}