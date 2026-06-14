int rainSensor = A0;
int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int rainValue = analogRead(rainSensor);

  Serial.print("Rain Value: ");
  Serial.println(rainValue);

  if (rainValue > 500) {
    digitalWrite(led, HIGH);
    Serial.println("Rain Detected");
  } else {
    digitalWrite(led, LOW);
    Serial.println("No Rain");
  }

  delay(1000);
}