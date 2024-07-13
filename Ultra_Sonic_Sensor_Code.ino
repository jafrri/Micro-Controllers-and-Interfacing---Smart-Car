const int enA = 9;   //ENABLE pin for Motor A to provide PWM 
const int enB = 10;     //ENABLE pin for Motor B to provide PWM 
const int in1 = 4;   //IN1 pin for Motor A for direction
const int in2 = 5;   //IN2 pin for Motor A for direction
const int in3 = 8;     //IN3 pin for Motor B for direction
const int in4 = 7;     //IN4 pin for Motor B for direction
const int trigPin = 10; // Trigger pin for the ultrasonic sensor
const int echoPin = 11;    // Echo pin for the ultrasonic sensor

// defines variables
long duration;
float distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}
