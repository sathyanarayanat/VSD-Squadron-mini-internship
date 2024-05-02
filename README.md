# HOME AUTOMATION USING ARDUINO IOT CLOUD 

## PROJECT OVERVIEW
In this project, We build a system that utilises CH32V003 RISC-V processor and the Blynk app to convert traditional home appliances into IoT-enabled devices. The system incorporates the ESP32 for its built-in Wi-Fi and Bluetooth capabilities. When the user sends an ON/OFF command through the Arduino IOT cloud app, it's transmitted to the ESP32 via Wi-Fi, which then activates a GPIO port in the VSDsquardron mini. This signal controls a servo motor connected to the VSDsquadron mini, allowing for remote operation of the home appliances.By integrating the Blynk app with the CH32V003 RISC-V processor and ESP32, users can conveniently manage their appliances from anywhere using a smartphone or tablet. This enhances user convenience, improves energy efficiency by enabling remote power management, and adds a layer of automation to household tasks. Additionally, the use of IoT technology increases the versatility and functionality of conventional home appliances, aligning them with modern smart home standards.

## PINOUT DIAGRAM
![pinout_final](https://github.com/sathyanarayanat/VSD-Squadron-mini-internship/assets/71438522/7affb808-8237-4dcd-a462-842e7524d752)


## Table for pin connections

| Servo motor(SG90)  | CH32V003x |
| ------------- | ------------- |
| Control pin (Blue wire) | PD4 |
| Power pin (Red wire)  | 5V |
| Ground pin (black wire) | GND |

| ESP32 | CH32V003x |
| ------------- | ------------- |
| Digital pin 4 (Orange wire) | PD2 |

## Components required
| Components| Quantity |
| ------------- | ------------- |
| VSDsquadron mini | 1 |
| ESP 32  | 1 |
| servo motor(SG90) | 1 |
| Jumper wires | As per required |

## Demonstration video
[![Demonstration video](images/thumbnail.png)](https://drive.google.com/file/d/16y3WWIxM0j3iQrkFy_5D158Ioe6KJkg4/view?usp=sharing)
