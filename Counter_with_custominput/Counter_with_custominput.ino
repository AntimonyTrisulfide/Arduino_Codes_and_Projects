int input=0;

void setup() {
  Serial.begin(9600);
  Serial.println("Enter the Initial Value");
  String str = "";
  while (str.equals("")){
    str = Serial.readString();
  }
  input = str.toInt();
}

void loop() {
  Serial.println(input);
  input++;
  delay(500);
}