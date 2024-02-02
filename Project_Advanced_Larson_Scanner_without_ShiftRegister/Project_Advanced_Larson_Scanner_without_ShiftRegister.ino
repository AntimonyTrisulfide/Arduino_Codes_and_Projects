int i = 0;
int pin_Array[] = {3, 5, 6, 9, 10, 11};

void setup()
{
  for (int j = 0; j < 6; j++) {
    pinMode(pin_Array[j], OUTPUT);
  }

  Serial.begin(9600);
  Serial.println("Arduino OK");
}

void loop()
{
  for (i = 0; i < 6; i++)
  {
    analogWrite(pin_Array[i], 255);
    if (i<4){
    analogWrite(pin_Array[i+1], 172);
    analogWrite(pin_Array[i+2], 86);
    }
    else if (i<5){
    analogWrite(pin_Array[i+1], 172);
    }
    else;
    delay(100);
    analogWrite(pin_Array[i], 0);
    analogWrite(pin_Array[i+1], 0);
    analogWrite(pin_Array[i+2], 0);
  }

  for (i = 4; i >= 1; i--)
  {
    analogWrite(pin_Array[i], 255);
    if (i>1){
    analogWrite(pin_Array[i-1], 172);
    analogWrite(pin_Array[i-2], 86);
    }
    else if (i>0){
    analogWrite(pin_Array[i-1], 172);
    }
    else;
    delay(100);
    analogWrite(pin_Array[i], 0);
    analogWrite(pin_Array[i-1], 0);
    analogWrite(pin_Array[i-2], 0);
  }
}