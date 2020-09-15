/*
 *Programm:         LED blinken im Sekundentakt
 *Letzte Änderung:  15.09.2020
 *Programmierer:    LC
 *Hardware:         Arduino UNO, Gruene LED, Widerstand 220 Ohm
 */

 #define LED 12

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED, HIGH);
  Serial.println("LED an");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED aus");
  delay(1000);

}
