#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

// Motor pins from the Arduino code in the project report
#define IN1 26
#define IN2 27
#define IN3 14
#define IN4 12

String command = "";

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_Voice_Controller");

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  stopMotors();
  Serial.println("Robot Ready");
}

void loop() {
  if (SerialBT.available()) {
    command = SerialBT.readStringUntil('\n');
    command.trim();
    command.toLowerCase();

    Serial.print("Command: ");
    Serial.println(command);

    if (command == "forward") {
      moveForward();
    } else if (command == "backward") {
      moveBackward();
    } else if (command == "left") {
      turnLeft();
    } else if (command == "right") {
      turnRight();
    } else if (command == "stop") {
      stopMotors();
    }
  }
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("Moving Forward");
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("Moving Backward");
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("Turning Left");
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Serial.println("Turning Right");
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Serial.println("Stopped");
}
