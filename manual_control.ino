// Motor A,B, Arduino and L298N connections
const int enA = 9;   //ENABLE pin for Motor A to provide PWM 
const int enB = 10;     //ENABLE pin for Motor B to provide PWM 
const int in1 = 4;   //IN1 pin for Motor A for direction
const int in2 = 5;   //IN2 pin for Motor A for direction
const int in3 = 8;     //IN3 pin for Motor B for direction
const int in4 = 7;     //IN4 pin for Motor B for direction

void setup() {
  Serial.begin(9600); //Serial initializing for Debugging
  
  //pinModes for enA, in1 and in2 below
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  //pinModes for enA, in1 and in2 below
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);


}

void loop() {
  //Both motors go forward
     if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'F': // when up arrow is pressed on the app
            Serial.print("FORWARD");
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enA, 110); //PWM value for enA
            analogWrite(enB, 160 ); //PWM value for enB
            break;
        case 'B': // when down is pressed in the app
            Serial.print("BACK");
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            analogWrite(enA, 110); //PWM value for enA
            analogWrite(enB, 160 ); //PWM value for enB
            break;
        case 'R': // when right is pressed in the app
            Serial.print("RIGHT");
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
            analogWrite(enA, 110); //PWM value for enA
            analogWrite(enB, 160 ); //PWM value for enB
            break;
        case 'L': // when left is pressed in the app
            Serial.print("LEFT");
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enA, 110); //PWM value for enA
            analogWrite(enB, 160 ); //PWM value for enB
            break;
            
        case 'I': // when forward-right is pressed in the app
            Serial.print("FORWARD-RIGHT");
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enA, 110); //PWM value for enA
            analogWrite(enB, 80); //PWM value for enB
            break;
        case 'G': // when forward-left is pressed in the app
            Serial.print("FORWARD-LEFT");
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enA, 55); //PWM value for enA
            analogWrite(enB, 160); //PWM value for enB
            break;
        case 'H': // when backward-left is pressed in the app
            Serial.print("BACKWARD-LEFT");
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            analogWrite(enA, 55); //PWM value for enA
            analogWrite(enB, 160 ); //PWM value for enB
            break;
        case 'J': // when backward-right is pressed in the app
            Serial.print("BACKWARD-RIGHT");
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            analogWrite(enA, 110); //PWM value for enA
            analogWrite(enB, 80 ); //PWM value for enB
            break;
            
        default: // when no button is pressed in the app
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
            break;
      }
      Serial.println(data);
   }

//    delay(3000);

}
