/*
 *Programm:         LED blinken im Sekundentakt
 *Letzte Änderung:  15.09.2020
 *Programmierer:    LC
 *Hardware:         Arduino UNO, Gruene LED, Widerstand 220 Ohm
 */

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
