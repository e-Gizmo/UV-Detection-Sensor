/*
  e-Gizmo UV sensor module
  
  This example code reads an analog input on pin 0,
  then prints the result to the serial monitor.
  
  Codes by
  e-Gizmo Mechtronix Central
  http://www.e-gizmo.com
  August 10,2017

 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int SENSOR_VALUE = analogRead(A0);
  // print out the value you read:
  Serial.println(SENSOR_VALUE);
  delay(10);        // delay in between reads for stability
}


