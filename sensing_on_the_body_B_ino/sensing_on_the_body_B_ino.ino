
int ledPin = 13;	// LED is connected to digital pin 13
int redPin = 11;	// R petal on RGB LED module connected to digital pin 11
int greenPin = 9;	// G petal on RGB LED module connected to digital pin 9
int bluePin = 10;  	// B petal on RGB LED module connected to digital pin 10
 	
void setup()	
{	 
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);	// sets the ledPin to be an output
  pinMode(redPin, OUTPUT);	// sets the redPin to be an output
  pinMode(greenPin, OUTPUT); 	// sets the greenPin to be an output
  pinMode(bluePin, OUTPUT);	// sets the bluePin to be an input
}       	
 
void loop() {	
  
  byte pressure;

  // check if data has been sent from the computer:
  if (Serial.available()) {
    // read the most recent byte (which will be from 0 to 255):
    pressure = Serial.read();
    // set the brightness of the LED:
    
    if (pressure == 1) {
      color(0,200,200);
    }
    
    if (pressure == 2) {
      color(255,255,255);
    }
    
    if (pressure == 3) {
      color(128, 0, 255);
    }
    
    if (pressure == 4) {
      color(255, 120, 0);
    }
    
    if (pressure == 5) {
      color(255, 255, 0);
    }
    
    if (pressure == 6) {
      color(0, 0, 255);
    }
  }
  
//   //Basic colors:	 
//   color(255,0,0);	//turn the RGB LED red  
//   delay(1000);	//delay for 1 second  
//   color(0,255,0);	//turn the RGB LED green  
//   delay(1000);	//delay for 1 second  
//   color(0,0,255);	//turn the RGB LED blue
//   delay(1000);	//delay for 1 second  
//   
//   //Example blended colors:	 
//   color(255,255,0);	//turn the RGB LED yellow  
//   delay(1000);	//delay for 1 second  
//   color(255,255,255);	//turn the RGB LED white  
//   delay(1000);	//delay for 1 second  
//   color(128,0,255);	//turn the RGB LED purple  
//   delay(1000);	//delay for 1 second  
//   color(0,0,0);	//turn the RGB LED off  
//   delay(1000);	//delay for 1 second  
}	 
 
void color (unsigned char red, unsigned char green, unsigned char blue)
{	 
   analogWrite(redPin, 255-red);	 
   analogWrite(bluePin, 255-blue);	 
   analogWrite(greenPin, 255-green);	 
}	 

