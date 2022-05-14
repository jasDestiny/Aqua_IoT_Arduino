int red = 2;
int green = 3;
int blue = 4;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A0);

  if (value > 500)
  {
    Serial.println("Full");
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  else if ((value > 300) && (value <= 500))
  {
    Serial.println("Mid level");
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
  else
  {
    Serial.println("Empty");
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    delay(100);
  }
}
