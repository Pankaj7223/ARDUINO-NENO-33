void setup() {
  // put your setup code here, to run once:
  pinMode (22,OUTPUT);
  pinMode (23,OUTPUT);
  pinMode (24,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(22,HIGH);
  delay(500);
  digitalWrite(22,LOW);
  delay(500);
  digitalWrite(23,HIGH);
  delay(500);
  digitalWrite(23,LOW);
  delay(500);
  digitalWrite(24,HIGH);
  delay(500);
  digitalWrite(24,LOW);
  delay(500);

}
