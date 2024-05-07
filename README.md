# HOME AUTOMATION USING ARDUINO IOT CLOUD 

## PROJECT OVERVIEW
In this project, We build a system that utilises CH32V003 RISC-V processor and the Arduino IOT cloud to convert traditional home appliances into IoT-enabled devices. The system incorporates the ESP32 for its built-in Wi-Fi and Bluetooth capabilities. When the user sends an ON/OFF command through the Arduino IOT cloud app/web appplication, the signal is transmitted to the ESP32 via Wi-Fi, which then activates a GPIO port in the VSDsquardron mini. This signal controls a servo motor connected to the VSDsquadron mini, allowing for remote operation of the home appliances.  By integrating the Arduino IOT cloud with the CH32V003 RISC-V processor and ESP32, users can conveniently manage their appliances from anywhere using a smartphone or tablet. This enhances user convenience, improves energy efficiency by enabling remote power management, and adds a layer of automation to household tasks. Additionally, the use of IoT technology increases the versatility and functionality of conventional home appliances, aligning them with modern smart home standards.

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

## fault injection

Injecting a fault into a microcontroller code can be done in several ways, depending on what kind of fault you want to simulate. Here are a few possibilities:

- Voltage Glitching: This involves momentarily lowering the voltage supply to the microcontroller, which can cause it to execute instructions incorrectly or behave unpredictably.

- Clock Glitching: Similar to voltage glitching, this involves momentarily disrupting the clock signal to the microcontroller, causing it to execute instructions incorrectly.
-Memory Corruption: Writing data to random memory locations can simulate faults caused by cosmic rays or other forms of radiation.

- Instruction Corruption: Modifying the program instructions in memory can cause the microcontroller to execute unintended instructions.

- Peripheral Fault Injection: Intentionally sending incorrect data to peripherals, such as sensors or communication modules, can simulate faults in external components.


since we work with a servo motor, its supposed to perform its action periodically when it receives the commans from input pin. To introduce a fault scenario where the servo motor behaves unexpectedly or inaccurately due to a random glitch.We can simulate this by randomly delaying the servo control pulses within a certain range, causing undesired behaviour behavior. To inject the fault using an ESP32 board, we can modify the code to receive commands from the ESP32 over serial communication to introduce the fault. Here's how you can do it.
 
