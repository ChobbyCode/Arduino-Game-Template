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

If you want a more detailed tutorial on the oled screen follow Miliohm's tutorial here -> https://www.youtube.com/watch?v=rxjIXVwgY50

Moving on to the input buttons (control scheme), the cables should be plugged into the right of the buttons on the breadboard and not the left as we used them for the screen. 
We are going to be using the digital input. There are six buttons so we are going to use six digital input pins, 2 through 7.

Digital input pin 2 will go to the left button, 3 will go to the up button, 4 will go to the down button, 5 will go to the right button. The two buttons on the right are the A & B buttons.
Pin 6 will go to the A button, whilst 7 goes to  B button.

Theoretically if all connections are good then you are good to go.

## Using the code base

The application will make a square move left, right, up & down based on what keys are pressed. This project is suppose to act as a demo to show you how to draw to a Oled I2C display, read inputs from buttons, and on how to act on those inputs to make changes to the screen.

Remember to change your I2C port or the screen will not work & it will give a error. The 0x3C is what needs to be changed. You can also get the I2C port easily by running this program -> https://github.com/ChobbyCode/Oled-I2C-Screen-Port-Grabber

![image](https://github.com/ChobbyCode/Arduino-Game-Template/assets/100038952/5b8a7db0-2d97-4448-ab74-2cd49b382955)


You can see at the bottom of the main file there are a lot of unused functions. These are the input functions, these functions are called whenever a condition for that button is met, i.e. if a is held then aDown(){} is called.

You should be able to work out how everything works from just reading it, if you are newer to cpp/c then I will explain it. The tabs on the top are there to keep most of the input boilerplate out of the way. The paint functions gets called when something new needs to be drawn to the screen. The input functions at the bottom of the main file are called when the input conditions are met which can be modified in inputManager.cpp. Most of the other code is explained by comments.
