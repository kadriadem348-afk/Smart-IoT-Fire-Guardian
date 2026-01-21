# IoT Smart Fire Guardian 🛡️🔥

An automated fire detection and mitigation system built with **ESP32**, designed to detect flames and high temperatures, trigger a safety mechanism (Servo), and send real-time alerts.

## 🚀 Features
- **Dual Sensing:** Uses Flame and Temperature sensors for high accuracy.
- **Physical Response:** Automatically rotates a Servo motor to close a gas valve or open an exhaust fan.
- **Cloud Integration:** Sends instant notifications to your mobile phone via Wi-Fi.
- **Real-time Monitoring:** Live dashboard for temperature data.

## 🛠️ Hardware Components
- **Microcontroller:** ESP32-WROOM-32
- **Flame Sensor:** Infrared flame detection module.
- **Temperature Sensor:** LM35 or DHT11.
- **Actuator:** SG90 Servo Motor.
- **Power:** 5V Micro USB or External Battery.

## 🔌 Circuit Diagram
The sensors are connected to the ADC pins of the ESP32, while the Servo is controlled via PWM.



## 💻 Software Setup
1. Install the **ESP32** board library in Arduino IDE.
2. Install **ESP32Servo** and **Blynk** libraries.
3. Update the `config.h` with your Wi-Fi credentials.
4. Upload the code to your ESP32.
