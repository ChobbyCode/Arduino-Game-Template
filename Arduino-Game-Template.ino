#include "inputManager.h"

// Oled screen definitions
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET -1
#define PAUSE 1000
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,OLED_RESET);

void setup() {

  // Starts the screen  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // IMPORTANT: Remember to change the screen code to your I2C screen code. You can get it easily by running this program -> https://github.com/ChobbyCode/Oled-I2C-Screen-Port-Grabber
  display.fillScreen(0);
  display.display();

  Serial.begin(9600);

  start();
}

void loop() {
  checkInputs(); // Checks the inputs & if the statements are true then it runs the input functions
  paint(); // Runs the paint function
}

byte playerX = 0;
byte playerY = 0;

void paint() {
  // All rendering stuff to go here
}

// All Possible Input Types
void aDown(){}
void aPressed(){}
void aReleased(){}
void bDown(){}
void bPressed(){}
void bReleased(){}
void upDown(){}
void upPressed(){}
void upReleased(){}
void downDown(){}
void downPressed(){}
void downReleased(){}
void leftDown(){}
void leftPressed(){}
void leftReleased(){}
void rightDown(){}
void rightPressed(){}
void rightReleased(){}
