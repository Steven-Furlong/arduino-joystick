#include <Joystick.h>

// Create the Joystick object correctly for HID communication
Joystick_ joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
  12, 0,                  // Button Count, Hat Switch Count
  false, false, false,      // No X, Y, Z Axis
  false, false, false,    // No Rx, Ry, or Rz
  false, false,           // No rudder or throttle
  false, false, false);   // No accelerator, brake, or steering

const int switchPin1 = 8; // Define the digital pin connected to the first toggle switch
const int switchPin2 = 15; // Define the digital pin connected to the second toggle switch

void setup() {
  joystick.begin(); // Initialize the joystick object to start HID communication

  Serial.begin(9600); // Start serial communication
  while (!Serial); // Wait for the serial connection to be established (optional)
  Serial.println("System Ready");

  pinMode(switchPin1, INPUT_PULLUP); // Set the first switch pin as input with a pull-up resistor
  pinMode(switchPin2, INPUT_PULLUP); // Set the second switch pin as input with a pull-up resistor
}

void loop() {
  int switchState1 = digitalRead(switchPin1); // Read the state of the first toggle switch
  int switchState2 = digitalRead(switchPin2); // Read the state of the second toggle switch

  // Handle the first switch
  if (switchState1 == LOW) { // When the first switch is in the ON position (connected to ground)
    joystick.setButton(1, 1); // Set button 1 to ON state
    Serial.println("Switch 1 is ON");
  } else { // When the first switch is in the OFF position
    joystick.setButton(1, 0); // Set button 1 to OFF state
    Serial.println("Switch 1 is OFF");
  }

  // Handle the second switch
  if (switchState2 == LOW) { // When the second switch is in the ON position (connected to ground)
    joystick.setButton(2, 1); // Set button 2 to ON state
    Serial.println("Switch 2 is ON");
  } else { // When the second switch is in the OFF position
    joystick.setButton(2, 0); // Set button 2 to OFF state
    Serial.println("Switch 2 is OFF");
  }

  delay(500); // Small delay to prevent serial output spamming
}
