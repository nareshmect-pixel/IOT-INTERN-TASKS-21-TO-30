int sensorPin = A0;
int led = 7;
int buzzer = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int lightValue = analogRead(sensorPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  // Adjust threshold if needed
  if (lightValue > 700) {

    digitalWrite(led, HIGH);
    tone(buzzer, 1000);

    Serial.println("Flame Detected!");
  }
  else {

    digitalWrite(led, LOW);
    noTone(buzzer);

    Serial.println("No Flame");
  }

  delay(500);
}