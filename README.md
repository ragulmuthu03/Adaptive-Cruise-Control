# Adaptive Cruise Control

This project focuses on the design and implementation of an Adaptive Cruise Control (ACC) system integrated with Internet of Things (IoT) technology using Tinkercad simulation platform. ACC is an advanced driver assistance system that automatically adjusts the speed of a vehicle to maintain a safe distance from the vehicle ahead, enhancing driving comfort and safety. IoT integration allows for real-time data exchange and control over the ACC system, making it more intelligent and responsive to dynamic driving conditions.

## Components Needed
| Name   | Quantity | Component                |
|--------|----------|--------------------------|
| U1     | 1        | Arduino Uno R3           |
| M1     | 1        | DC Motor                 |
| D1     | 1        | Blue LED                 |
| D2     | 1        | Green LED                |
| D3     | 1        | Orange LED               |
| R2, R3, R4 | 3    | 1 kΩ Resistor            |
| PIR1   | 1        | PIR Sensor               |
| PIEZO1 | 1        | Piezo                    |
| DIST1  | 1        | Ultrasonic Distance Sensor (4-pin) |

## How the Project Works
The ultrasonic sensor is utilized to detect the distance of vehicles moving ahead on the road. As the distance reduces between our vehicle and the one in front, the system adjusts the motor speed proportionally to maintain a safe distance. This adjustment is also visually indicated using LEDs. 

The IR sensor is positioned at the back to detect motion behind the vehicle, enabling collision avoidance. When the speed adapts due to the presence of a vehicle behind, the system alerts the driver using a buzzer.

The motor driver ensures proper functioning of the motor when it is connected with the Arduino. All components are interconnected on a breadboard.

## Repository Contents
1. `Adaptive_Cruise_Control.ino`: Arduino code for the Adaptive Cruise Control system.
2. `Circuit.png`: Circuit diagram depicting the connections of the components.
3. `Components List.png`: Details of the components required for the project.
4. `Prototype Image.png`: Image of the prototype model showcasing the setup.
5. `Schematic Diagram.png`: Schematic diagram illustrating the electronic connections.

Feel free to explore the repository for more details on the project implementation and simulation.
