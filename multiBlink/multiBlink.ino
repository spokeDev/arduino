int firstLed = 7;
int secondLed = 5;
int thirdLed = 3;

int blinkTime = 200;



void setup()
{
 pinMode(firstLed, OUTPUT);
 pinMode(secondLed, OUTPUT);
 pinMode(thirdLed, OUTPUT);
}

void loop()
{
  blinkLed(firstLed);
  blinkLed(secondLed);
  blinkLed(thirdLed);
  blinkLed(secondLed);
  
} 

void blinkLed(int led)
{   
  digitalWrite(led, LOW);
  delay(blinkTime);
  digitalWrite(led, HIGH);
  delay(blinkTime);
}

