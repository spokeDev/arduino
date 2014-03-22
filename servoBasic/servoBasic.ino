
 
#include <Servo.h> 
 
int servoPin = 6;
int ledPIN = 2;
int blinkTime = 200;

 
Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin);
 pinMode(ledPIN, OUTPUT); 
} 

 
 
void loop() 
{

  blinkLed(ledPIN);
  
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 250; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  
  blinkLed(ledPIN);
  delay(500);
  
  // now scan back from 180 to 7 degrees
  for(angle = 250; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
  
  blinkLed(ledPIN);
  delay(4);
} 



void blinkLed(int led)
{   
  digitalWrite(led, LOW);
  delay(blinkTime);
  digitalWrite(led,HIGH);
  delay(blinkTime);
}

 

