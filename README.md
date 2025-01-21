# Counter Using Proximity Sensor with ESP8266 🚀

This repository contains a project that uses an **IR proximity sensor** and an **ESP8266 microcontroller** to count objects passing through a designated area. The count is displayed on a **7-segment display**, making it a practical solution for object detection and monitoring.

## 📜 Problem Statement

Develop a reliable counter system using IR sensors integrated with the ESP8266 microcontroller. The system should accurately track and count objects passing through a defined area, displaying the count on a 7-segment display.

## 🛠️ Features

- **IR Sensor-Based Object Detection**: Uses an IR proximity sensor for accurate object detection.
- **7-Segment Display**: Displays the count in real-time.
- **ESP8266 Microcontroller**: Provides efficient control and connectivity options.
- **Cost-Effective Solution**: Affordable and adaptable for IoT and automation projects.

## 📂 Project Structure

- **`counter_proximity_sensor.ino`**: Arduino code for the counter system.
- **`ESD_Report.pdf`**: Detailed report documenting the problem statement, theory, algorithm, source code, and conclusions.
- **`README.md`**: Documentation for the repository.

## 🔧 How to Run

### Hardware Requirements
1. **ESP8266 Microcontroller (e.g., NodeMCU)**
2. **IR Proximity Sensor**
3. **7-Segment Display (Common Cathode)**
4. Breadboard and Jumper Wires

### Software Requirements
1. **Arduino IDE**: Download from [here](https://www.arduino.cc/en/software).
2. **IRremote Library**:
   - Install via Arduino IDE:
     - Go to **Sketch > Include Library > Manage Libraries**.
     - Search for `IRremote` and install it.

### Steps to Run
1. **Circuit Connections**:
   - Connect the IR sensor's **OUT pin** to `D7` on ESP8266, **VCC to 3.3V**, and **GND to GND**.
   - Connect the 7-segment display's pins (`a` to `g`) to `D0` to `D6`.

2. **Upload Code**:
   - Open `counter_proximity_sensor.ino` in Arduino IDE.
   - Select the correct board (**NodeMCU 1.0 (ESP-12E Module)**) and port under **Tools**.
   - Click **Upload** to flash the code.

3. **Run the System**:
   - Power the ESP8266.
   - The IR sensor will detect objects, and the count will be displayed on the 7-segment display.

## 🖼️ Sample Circuit Diagram

![Picture1](https://github.com/user-attachments/assets/1c0c12b8-1d83-4216-839e-5584d0dcefba)


---

## 📘 Report Highlights

### Components Used
- **IR LED and Photodiode**: Used for emitting and detecting infrared signals.
- **ESP8266**: Provides Wi-Fi connectivity and serves as the primary microcontroller.
- **LM358 Op-Amp**: Used for signal amplification in the IR sensor module.
- **Variable Resistor**: Adjusts detection range.

### Algorithm
1. Initialize pins for the 7-segment display and IR sensor.
2. Read IR sensor output to detect object presence.
3. Increment the count if an object is detected.
4. Reset the count to 0 after reaching 9.
5. Update the 7-segment display with the current count.

For detailed information, refer to the **`ESD_Report.pdf`** file.

---

## 📊 Applications

- Visitor counting in public spaces.
- Object counting on conveyor belts.
- Monitoring systems for IoT applications.
