void setup() {

  Serial.begin(9600);
  
  int i;
  String str = "";
  Serial.println("Enter the Initial Value");
  while (str.equals("")){
    str = Serial.readString();
  }
  i = str.toInt();
  while (i >= 0) {
    Serial.println(i);
    delay(1000);
    i--;
  }
}

void loop() {
  // Do nothing in loop()
}
