int counter = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(counter);
  Serial.print(" ");
  if ( (counter % 2) == 0 ) {
    Serial.println("Buzz");
  } 
  else if ((counter == 1) == 0){
    Serial.println("Fizz");
  }
  else {
    Serial.println("Fizz");
  }
  
  counter = counter + 1;
  delay(500);
}