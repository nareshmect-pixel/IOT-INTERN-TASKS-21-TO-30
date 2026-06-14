int irSensor = 2;
int led = 7;

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int obstacle = digitalRead(irSensor);

  if (obstacle == LOW) {
    digitalWrite(led, HIGH);

    Serial.println("Obstacle Detected!");
  }
  else {
    digitalWrite(led, LOW);

    Serial.println("No Obstacle");
  }

  delay(500);
}