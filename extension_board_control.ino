/*
  Sketch generated by the Arduino IoT Cloud Thing "Untitled 2"
  https://create.arduino.cc/cloud/things/a3e8ba0e-afc9-4984-a346-a1700bae6adc

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  String state;
  bool sw1;
  bool sw2;
  bool sw3;
  bool sw4;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/
#include <EEPROM.h>
#include "thingProperties.h"
const int swt1 = 4;
const int swt2 = 5;
const int swt3 = 12;
const int swt4 = 14;
bool state1 = false;
bool state2 = false;
bool state3 = false;
bool state4 = false;

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  EEPROM.begin(4);
  pinMode(swt1, OUTPUT);
  pinMode(swt2, OUTPUT);
  pinMode(swt3, OUTPUT);
  pinMode(swt4, OUTPUT);
  /*
  digitalWrite(swt1, HIGH);
  digitalWrite(swt2, HIGH);
  digitalWrite(swt3, HIGH);
  digitalWrite(swt4, HIGH);
  */
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  digitalWrite(swt1, EEPROM.read(0));
  digitalWrite(swt2, EEPROM.read(1));
  digitalWrite(swt3, EEPROM.read(2));
  digitalWrite(swt4, EEPROM.read(3));
  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
  */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here
}



/*
  Since Sw1 is READ_WRITE variable, onSw1Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onSw1Change()  {
  // Add your code here to act upon Sw1 change
  state1 = !state1;
  if (state1) {
    digitalWrite(swt1, LOW);
    EEPROM.write(0, 0);
  }
  else {
    digitalWrite(swt1, HIGH);
    EEPROM.write(0, 1);
  }
  EEPROM.commit();
}

/*
  Since Sw2 is READ_WRITE variable, onSw2Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onSw2Change()  {
  // Add your code here to act upon Sw2 change
  state2 = !state2;
  if (state2) {
    digitalWrite(swt2, LOW);
    EEPROM.write(1, 0);
  }
  else {
    digitalWrite(swt2, HIGH);
    EEPROM.write(1, 1);
  }
  EEPROM.commit();
}

/*
  Since Sw3 is READ_WRITE variable, onSw3Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onSw3Change()  {
  // Add your code here to act upon Sw3 change
  state3 = !state3;
  if (state3) {
    digitalWrite(swt3, LOW);
    EEPROM.write(2, 0);
  }
  else {
    digitalWrite(swt3, HIGH);
    EEPROM.write(2, 1);
  }
  EEPROM.commit();
}

/*
  Since Sw4 is READ_WRITE variable, onSw4Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onSw4Change()  {
  // Add your code here to act upon Sw4 change
  state4 = !state4;
  if (state4) {
    digitalWrite(swt4, LOW);
    EEPROM.write(3, 0);
  }
  else {
    digitalWrite(swt4, HIGH);
    EEPROM.write(3, 1);
  }
  EEPROM.commit();
}

/*
  Since State is READ_WRITE variable, onStateChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onStateChange()  {
  // Add your code here to act upon State change
}