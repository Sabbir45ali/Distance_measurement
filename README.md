# Arduino Distance Measurement System

This project uses an Arduino Uno, an HC-SR04 ultrasonic sensor, and a 16x2 LCD display to measure distances and display the results.

## Components Needed

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD Display
- Breadboard and Jumper Wires
- 10kΩ Potentiometer (for LCD contrast adjustment)

## Circuit Connections

### HC-SR04 Ultrasonic Sensor
- **VCC** to **5V** on Arduino
- **GND** to **GND** on Arduino
- **Trig** to **Digital Pin 9** on Arduino
- **Echo** to **Digital Pin 10** on Arduino

### 16x2 LCD Display
- **VSS** to **GND**
- **VDD** to **5V**
- **V0** to center pin of the potentiometer (other two pins of the potentiometer to 5V and GND)
- **RS** to **Digital Pin 7** on Arduino
- **RW** to **GND**
- **E** to **Digital Pin 6** on Arduino
- **D4** to **Digital Pin 5** on Arduino
- **D5** to **Digital Pin 4** on Arduino
- **D6** to **Digital Pin 3** on Arduino
- **D7** to **Digital Pin 2** on Arduino
- **A (Anode)** to **5V** through a 220Ω resistor
- **K (Cathode)** to **GND**

## Code Explanation

### Library Initialization
The `LiquidCrystal` library is used to control the LCD. The following line initializes the LCD with the appropriate pins connected to the Arduino:
```cpp
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
```

**Clone the Repository**:
   ```sh
   git clone https://github.com/Sabbir45ali/near---dear-cake-shop.git
