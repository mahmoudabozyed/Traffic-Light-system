int ON = 500;
int OFF = 500;
int red = 8;
int yellow = 9;
int green = 10;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  for(int i=0;i<3;i++){
  digitalWrite(yellow,LOW);
  delay(OFF);
  digitalWrite(yellow,HIGH);
  delay(ON);
  }
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(ON);
  digitalWrite(green,LOW);
  delay(2000);
}
