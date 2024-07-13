void setup() {
Serial.begin(9600);
 // put your setup code here, to run once:
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module

      switch(data)
      {
        case 'F': Serial.print("UP");break; // when up arrow is pressed on the app
        case 'B': Serial.print("DOWN");break; // when down is pressed on the app
        case 'R': Serial.print("RIGHT");break; // when right is pressed on the app
        case 'L': Serial.print("LEFT");break; // when left is pressed on the app
        case 'S':
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
