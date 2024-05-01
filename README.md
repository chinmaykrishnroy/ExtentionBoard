# ExtentionBoard
This repository hosts the code for a remote extension board control system using Arduino and IoT. Control switches on your extension board from anywhere via the Arduino IoT Cloud dashboard. Supports ESP8266 or ESP32 microcontrollers and a 4-channel relay module. Enjoy persistent state storage for seamless operation across power cycles.

## Features

- **Remote Control**: Toggle the state of switches on the extension board remotely through the Arduino IoT Cloud dashboard.
- **Persistent State**: The state of switches is saved to EEPROM, ensuring that the state is maintained across power cycles.

## Hardware Requirements

- Microcontroller: ESP8266 or ESP32
- 4-channel relay module
- Extension board with switches or sockets
- Internet connection

## Getting Started

1. **Setting up the Hardware**:
   - Connect the 4-channel relay module to the microcontroller (ESP8266 or ESP32) and the extension board. Ensure that the switches or sockets are connected to the relay channels.
   - Upload the provided sketch (`extension_board_control.ino`) to the microcontroller.

2. **Setting up Arduino IoT Cloud**:
   - Visit the [Arduino IoT Cloud](https://create.arduino.cc/cloud/) website and create an account/sign in.
   - Follow the instructions to create a new Thing and define the necessary variables (e.g., `sw1`, `sw2`, `sw3`, `sw4`, `state`) in the dashboard.

3. **Configuring the Sketch**:
   - Open the `extension_board_control.ino` file in the Arduino IDE.
   - Update the `thingProperties.h` file with your IoT Cloud credentials and Thing ID.
   - Customize the pin configurations if necessary.

4. **Uploading the Sketch**:
   - Connect the microcontroller (ESP8266 or ESP32) to your computer via USB.
   - Select the correct board and port in the Arduino IDE.
   - Click on the upload button to upload the sketch to the microcontroller.

5. **Controlling the Extension Board**:
   - Access the Arduino IoT Cloud dashboard from any internet-enabled device.
   - Toggle the switches (`sw1`, `sw2`, `sw3`, `sw4`) to control the corresponding relay channels on the extension board.
  
## Dashboard
![image](https://github.com/chinmaykrishnroy/ExtentionBoard/assets/65699140/1a77c2ad-8a88-498e-b3fe-4450ada21796)

## Image
![boardonline](https://github.com/chinmaykrishnroy/ExtentionBoard/assets/65699140/89151741-0fa5-4392-a0b3-1c5966d88e1b)


## Contributing

Contributions are welcome! If you have any ideas for improvements or feature requests, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
