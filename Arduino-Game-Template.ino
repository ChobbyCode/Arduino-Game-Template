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

  // Button setup
  start();
}

void loop() {
  checkInputs(); // Checks the inputs & if the statements are true then it runs the input functions
  paint(); // Runs the paint function
}

//Player Variables
byte playerX = 0;
byte playerY = 0;

void paint() {
  // All rendering stuff to go here

  //Clears the screen
  display.fillScreen(0);

  //Draws the player to the screen
  display.fillRect(playerX, playerY, 10, 10, 1);

  //Updates the screen
  display.display();
}

// All Possible Input Types. Down is whilst the button is pressed. Pressed is called once when the button is first pressed. Released is called once when the button is released

void rightDown(){
  playerX = playerX + 1;
}

void leftDown(){
  playerX = playerX - 1;
}

void upDown(){
  playerY = playerY - 1;
}

void downDown(){
  playerY = playerY + 1;
}

//Below are all the unused input types. Which include single pressed and when released.
void aDown(){}
void aPressed(){}
void aReleased(){}
void bDown(){}
void bPressed(){}
void bReleased(){}
void upPressed(){}
void upReleased(){}
void downPressed(){}
void downReleased(){}
void leftPressed(){}
void leftReleased(){}
void rightPressed(){}
void rightReleased(){}
