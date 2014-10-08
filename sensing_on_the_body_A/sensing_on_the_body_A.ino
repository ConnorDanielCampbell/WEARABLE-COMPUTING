// sensing the body: boredom
// sensor
// uses a force sensor to change the colours of a Tricolor LED over XBee radios
// adapted from Kate Hartman's Xbee Arduino example (Make: Wearable Electronics, pg. 207)


int sensorPin = A0;
int sensorValue = 0;
int hi = 1023;
int low = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the light sensor value
  int sensorValue = analogRead(sensorPin);
  // map to 10
  sensorValue =  map(sensorValue, low, hi, 1, 6)
  // print the value of the light sensor
  Serial.println(sensorValue);
  delay(100);
}
