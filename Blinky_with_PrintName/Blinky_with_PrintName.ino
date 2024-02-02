int pin_led=13;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Manav Marmat");
  digitalWrite(pin_led, HIGH);
  delay(500);
  digitalWrite(pin_led, LOW);
  delay(500);
}