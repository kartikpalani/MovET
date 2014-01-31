
void setup() {

 Serial.begin(9600);

}



void loop() {

  int val0 = analogRead(0);
  int val1 = analogRead(2);
  
  // print to serial
  Serial.print(val0);
  Serial.print(" ");
  Serial.print(val1);
  Serial.print("\n");
  //Serial.print("Value 0: ");
  //Serial.println(val0);
  
  //Serial.print("Value 1: ");
  //Serial.println(val1);
  //val2 = analogRead(sensor2);
  //Serial.print("Value 2: ");
  //Serial.println(val2);
  //val3 = analogRead(sensor3);
  //Serial.print("Value 3: ");
  //Serial.println(val3);




  delay(50);  // we have to make a delay to avoid overloading the serial port

}
