# IOT HOME AUTOMATION USING BLYNK APP 

## PROJECT OVERVIEW
In this project, We build a system that utilises CH32V003 RISC-V processor and the Blynk app to convert traditional home appliances into IoT-enabled devices. The system incorporates the ESP32 for its built-in Wi-Fi and Bluetooth capabilities. When the user sends an ON/OFF command through the Blynk app, it's transmitted to the ESP32 via Wi-Fi, which then activates a GPIO port in the VSDsquardron mini. This signal controls a servo motor connected to the VSDsquadron mini, allowing for remote operation of the home appliances.By integrating the Blynk app with the CH32V003 RISC-V processor and ESP32, users can conveniently manage their appliances from anywhere using a smartphone or tablet. This enhances user convenience, improves energy efficiency by enabling remote power management, and adds a layer of automation to household tasks. Additionally, the use of IoT technology increases the versatility and functionality of conventional home appliances, aligning them with modern smart home standards.

## PINOUT DIAGRAM
![pinout_diagram](https://github.com/sathyanarayanat/VSD-Squadron-mini-internship/assets/71438522/39252d07-52f1-416b-a5b0-5a63df0f049f)


## Table for pin connections

| Servo motor(SG90)  | CH32V003x |
| ------------- | ------------- |
| Control pin (Blue wire) | PD5 |
| Power pin (Red wire)  | 5V |
| Ground pin (black wire) | GND |

| ESP32 | CH32V003x |
| ------------- | ------------- |
| Digital pin 18 (Orange wire) | PD4 |

## Components required
| Components| Quantity |
| ------------- | ------------- |
| VSDsquadron mini | 1 |
| ESP 32  | 1 |
| servo motor(SG90) | 1 |
| Jumper wires | As per required |

