const int ledPin=13;
const int inputPin1=2;
const int inputPin2=3;
void setup() {
pinMode(ledPin,OUTPUT);
pinMode(inputPin1,INPUT);
pinMode(inputPin2,INPUT);
}

void loop() {
if(digitalRead(inputPin1)==HIGH)
{
  digitalWrite(ledPin,HIGH);
  delay(400);
  digitalWrite(ledPin,LOW);
  delay(400);
  }
  else if(digitalRead(inputPin2)==HIGH)
  {
    digitalWrite(ledPin,HIGH);
    delay(100);
    digitalWrite(ledPin,LOW);
    delay(100);
    }
}
