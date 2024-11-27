int redled =13;
int greenled =15;
int yellowled =14;
void setup() {
  // put your setup code here, to run once:
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(yellowled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redled,HIGH);
  digitalWrite(greenled,LOW);
  digitalWrite(yellowled,LOW);
  delay(5000);
  digitalWrite(greenled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(redled,LOW);
  delay(5000);
  digitalWrite(yellowled,HIGH);
  digitalWrite(redled,LOW);
  digitalWrite(greenled,LOW);
  delay(5000);
}
