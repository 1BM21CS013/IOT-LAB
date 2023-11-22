int LDR = 0;
int LED = 13;
int LDRValue = 0;
int lightSensitivity = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  LDRValue = analogRead(LDR);
  Serial.println(LDRValue);
  delay(50);

  if(LDRValue < lightSensitivity)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);

  delay(1000);
}
