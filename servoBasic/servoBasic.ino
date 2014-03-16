
 
#include <Servo.h> 
 
int servoPin = 6;
 
Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin); 
} 
 
 
void loop() 
{ 
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 100; angle++)  
  {                                  
    servo.write(angle);               
    delay(25);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 100; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(25);       
  } 
} 

