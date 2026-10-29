# Smart Voice Controlled Wheelchair using ESP32

## Project overview
This project is an educational prototype for voice-controlled mobility using an ESP32. According to the project report, a smartphone sends voice commands over Bluetooth, and the ESP32 controls the motor driver and movement. The report also describes an ultrasonic sensor for obstacle detection and a GPS module for location tracking.

## Features described in the project report
- Bluetooth-based voice commands such as `forward`, `backward`, `left`, `right`, and `stop`
- ESP32 microcontroller programmed using Arduino IDE (Embedded C/C++)
- L298N motor driver for DC motor control
- Ultrasonic sensor for obstacle detection
- GPS module (NEO-6M) for location tracking (as described in the report; verify whether tested in your prototype)
- Battery-powered robot chassis

## Hardware listed in the report
- ESP32 development board
- L298N motor driver
- BO DC motor(s) and wheels
- SG90 servo motor (listed in report)
- HC-SR04 ultrasonic sensor
- NEO-6M GPS module (listed in report)
- Two 18650 rechargeable batteries and holder
- Breadboard and jumper wires
- Smartphone for voice commands

## Repository structure
- `images/wheelchair-prototype.jpg` — prototype photo
- `report/SmartVoiceControlledWheelchair.docx` — project report
- `code/` — place the final Arduino `.ino` file here after confirming it matches the code tested on your hardware

## Arduino code
The report includes a Bluetooth motor-control sketch. Before publishing, copy the code you actually used into `code/SmartVoiceControlledWheelchair.ino` and check the GPIO pins and hardware connections match your prototype. The code printed in the report appears to cover Bluetooth commands and motor control; do not claim GPS tracking or automatic obstacle stopping is implemented unless that functionality is present in your tested code.

## Setup (general)
1. Install Arduino IDE.
2. Install ESP32 board support in Arduino IDE.
3. Select the correct ESP32 board and COM port.
4. Open the `.ino` file, verify the pin connections, then compile and upload.
5. Test the prototype with the wheels lifted off the ground first, and keep a physical power switch accessible.

## Safety note
This is an educational prototype, not a certified mobility device. Do not use it to carry a person. Test motor direction, stopping behavior, battery wiring, and obstacle detection safely before any further development.

## Contributors
Add your team members and institution details here if you want them shown publicly.
