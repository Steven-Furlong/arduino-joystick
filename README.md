# USB Button Box with Joystick HID Interface

This project is a custom USB button box designed using an Arduino-compatible microcontroller. It leverages the Joystick library to emulate a gamepad, making it ideal for use in sim racing, flight simulation, and other gaming setups. The current setup includes two toggle switches that are mapped to joystick button inputs, allowing for versatile control of a truck simulator 18-gear shifter.

## Features
- **Joystick HID Interface:** Uses the Joystick library to create a gamepad with up to 12 buttons.
- **Toggle Switch Integration:** Supports multiple toggle switches that act as joystick buttons.
- **Easy Setup:** Simple configuration and pin assignment for rapid prototyping.
- **Serial Debugging:** Provides real-time feedback via serial output to monitor switch states.

## Hardware Requirements
- Arduino-compatible microcontroller (e.g., Arduino Leonardo or Micro Pro) with HID support.
- Toggle switches or any other momentary switch types.
- USB connection to your computer.

## Getting Started
1. **Hardware Setup:** Connect the toggle switches to the specified digital pins (default pins 8 and 9).
2. **Upload Code:** Flash the provided Arduino sketch to your microcontroller.
3. **Test:** Use a game controller tester or your favorite simulation game to test the button inputs.
4. **Debugging:** View the switch states in the Serial Monitor for troubleshooting.

## Dependencies
- **[Joystick Library](https://github.com/MHeironimus/ArduinoJoystickLibrary)

## How to Use
1. When a toggle switch is activated, it sends a signal to the microcontroller.
2. The microcontroller translates this signal into a joystick button press.
3. Compatible games and software can detect these inputs like a standard gamepad.

## Future Enhancements
- Support for additional toggle switches and rotary encoders.
- Customizable button mappings.
- Integration with other simulation controls (e.g., pedals, levers).

## License
This project is open-source and available under the MIT License.

## Contributions
Contributions, bug reports, and feature requests are welcome! Please feel free to submit a pull request or open an issue.
