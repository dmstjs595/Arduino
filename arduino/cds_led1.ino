int cds = A1;
int cdsValue = 0;
int led1 = 11;
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
}
void loop() {
  cdsValue  = analogRead(cds);
  Serial.print("sensor = ");
  Serial.println(cdsValue);
  if (cdsValue >= 600)
  {
    digitalWrite(led1, LOW);
    delay(2000);
  }
  else
  {
    digitalWrite(led1, HIGH);
    delay(2000);
  }
}
