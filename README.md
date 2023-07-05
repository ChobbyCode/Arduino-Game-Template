# Arduino-Game-Template

This is a template to make games on the Arduino Uno Rev 3.

### You will need:

- An Arduino Uno Rev 3 (or any other interchangeable microcontroller)
- 1x breadboard for soldering board
- 6x Plunger Tactile Push Buttons
- 1x oled I2C displayA
- 20x jumper cables male - male
- Power Supply (could connect to computer)

## Connections

Start by placing the components on the bread board. This can be seen below.

![image](https://github.com/ChobbyCode/Arduino-Game-Template/assets/100038952/4c409093-bbe5-4743-8f30-2a2f817c0953)

Connects are as followed...

Connect ground to the left of all buttons, you can do this by dedicating a column to the ground and taking from there when needed.

The connections for the screen are seen below. 

GND -> GND

5V -> VCC

A5 -> SCK/SCL

A4 -> SDA

![image](https://github.com/ChobbyCode/Arduino-Game-Template/assets/100038952/7d0a16e6-1476-4097-8d09-b5c68d4bac44)

image credit: miliohm https://www.youtube.com/@miliohm

Moving on to the input buttons (control scheme), the cables should be plugged into the right of the buttons on the breadboard and not the left as we used them for the screen. 
We are going to be using the digital input. There are six buttons so we are going to use six digital input pins, 2 through 7.

Digital input pin 2 will go to the left button, 3 will go to the up button, 4 will go to the down button, 5 will go to the right button. The two buttons on the right are the A & B buttons.
Pin 6 will go to the A button, whilst 7 goes to  B button.

Theoretically if all connections are good then you are good to go.

## Using the code base

(Write code then add docs here)
