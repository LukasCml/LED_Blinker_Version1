void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(13, HIGH);
  Serial.println("LED an");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println("LED aus");
  delay(1000);

}
