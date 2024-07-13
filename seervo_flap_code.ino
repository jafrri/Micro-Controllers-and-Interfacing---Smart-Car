// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 11; 
// Create a servo object 
Servo Sirwo; 
void setup() 
{ 
   // We need to attach the servo to the used pin number 
   Sirwo.attach(servoPin); 
}
void loop()
{ 
   // Make servo go to 180 degrees 
   Sirwo.write(180); 
   delay(1000); 
   Sirwo.write(0);
   delay(1000);
}
