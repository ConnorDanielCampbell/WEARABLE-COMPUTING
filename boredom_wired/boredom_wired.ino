int ledPin = 13; 	// LED is connected to digital pin 13
int redPin = 11; 	// R petal on RGB LED module connected to digital pin 11
int greenPin = 9; 	// G petal on RGB LED module connected to digital pin 9
int bluePin = 10;   	// B petal on RGB LED module connected to digital pin 10
int sensorPin = A5;
int sensorValue = 0;
int hi = 800;
int low = 400;
  	
void setup() 	
{ 	 
        pinMode(ledPin, OUTPUT); 	// sets the ledPin to be an output
        pinMode(redPin, OUTPUT); 	// sets the redPin to be an output
        pinMode(greenPin, OUTPUT);  	// sets the greenPin to be an output
        pinMode(bluePin, OUTPUT); 	// sets the bluePin to be an input
}        	
	 
void loop()  	 // run over and over again 
{ 	
  
    // read the light sensor value
  int sensorValue = analogRead(sensorPin);

  sensorValue =  map(sensorValue, low, hi, 1, 4);
  sensorValue = constrain(sensorValue, 1, 4);
  // print the value of the light sensor
  Serial.println(sensorValue);
  
 if (sensorValue == 1) {
    color(0,200,200);
  }
  
  if (sensorValue == 2) {
    color(0,200,0);
  }
  
  if (sensorValue == 3) {
    color(0,200,200);
  }
  
  if (sensorValue == 4) {
    color(0,200,200);
  }
  
} 	 
	 
void color (unsigned char red, unsigned char green, unsigned char blue) 	//the color generating function 
{ 	 
         analogWrite(redPin, 255-red); 	 
         analogWrite(bluePin, 255-blue); 	 
         analogWrite(greenPin, 255-green); 	 
}
