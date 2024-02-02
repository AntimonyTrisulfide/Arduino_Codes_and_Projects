int counter = 1;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  Serial.print(counter);
  Serial.print(" ");
  if ( (counter % 2) == 0 ) {
    Serial.println("Buzz");
    digitalWrite(8, HIGH);
  } 
  else {
    Serial.println("Fizz");
    digitalWrite(11, HIGH);
  }
  
  counter = counter + 1;
  delay(500);
}