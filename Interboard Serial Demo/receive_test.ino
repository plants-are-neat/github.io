#include <Wire.h>

void setup(){
  Wire.begin(4);                // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
}

void loop(){
  delay(100);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany){
  String s = "";
  while(1 < Wire.available()) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    s.concat(c);          // print the character
  }
  Serial.print(s);
  int x = Wire.read();    // receive byte as an integer
  Serial.println(x);         // print the integer
}
