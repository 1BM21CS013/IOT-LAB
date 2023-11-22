int sensorState = 0;
int PIR = 2;
int LED = 13;
void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  // read the state of the sensor/digital input
  sensorState = digitalRead(PIR);
  // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.println("Human near");
  } 
  else {
    Serial.println("Human away");
    digitalWrite(LED, LOW);
  }
  
  delay(1000);
}