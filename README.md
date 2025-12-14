# Fruit-Ripening-Detection
Mini Project on detection of fruit ripening using sensors and Arduino.

OVERVIEW
Fruit ripening is associated with changes in parameters such as gas emission (ethylene), color, firmness, and temperature. This project presents a low-cost, Arduino-based- real-time fruit ripeness detection system that utilizes the MQ-135 gas sensor to measure the ethylene released during ripening process. The system helps identify whether a fruit is ripe or unripe, which is useful for agriculture, food quality monitoring, and storage management. 

COMPONENTS USED
Microcontroller (Arduino UNO)
Gas Sensor (MQ‑135)
LED 
16X2 LCD Display 
Potentiometer
Resistors and jumper wires
Breadboard

WORKING PRINCIPLE
The primary objective of this project is to accurately determine the ripeness of fruits from the ethylene gas produced.The MQ135 gas sensor detects the concentration of emitted gases. The microcontroller compares these values with predefined thresholds and determines the ripening stage.
If the threshold value is below 100 → LCD display shows “Not Ripened”, LED OFF.
If the threshold value is above 100 → LCD display shows “Fruit is Ripened”, LED ON.
