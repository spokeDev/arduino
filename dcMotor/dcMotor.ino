int motorPin = 3;
int speed = 255;

void setup()
{
  pinMode(motorPin, OUTPUT);

}


void loop()
{
  analogWrite(motorPin, speed);
  delay(5000);
  speed = 200;
  analogWrite(motorPin, speed);
  delay(5000);
  speed = 100;
}
