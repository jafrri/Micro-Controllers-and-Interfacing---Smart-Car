// Motor A,B, Arduino and L298N connections
const int enA = 9;   //ENABLE pin for Motor A to provide PWM 
const int enB = 10;     //ENABLE pin for Motor B to provide PWM 
const int in1 = 4;   //IN1 pin for Motor A for direction
const int in2 = 5;   //IN2 pin for Motor A for direction
const int in3 = 8;     //IN3 pin for Motor B for direction
const int in4 = 7;     //IN4 pin for Motor B for direction


void setup() {
  Serial.begin(115200); //Serial initializing for Debugging
  //pinModes for enA, in1 and in2 below
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  //pinModes for enA, in1 and in2 below
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}
void loop() {
    //Logic for Straight path
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    // For Motor 1
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    // For Motor 2
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, 255); //PWM value for enA
    analogWrite(enB, 0); //PWM value for enB
    
       
    //////////////////////////////////////////////////////////////////////////////////////////////////
//    //For 360 degree rotation in Clock Wise
//    // If wanna rotate it in Counter Clockwise then make in1--> HIGH and in2--> LOW
//    digitalWrite(in1, LOW);
//    digitalWrite(in2, HIGH);
//    
//    analogWrite(enA, 200); //PWM value for enA
//    analogWrite(enB, 200); //PWM value for enB
    ////////////////////////////////////////////////////////////////////////////////////////////
}
