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


// Definitions for button inputs
#define left 2
#define up 3
#define down 4
#define right 5 
#define a 6
#define b 7 


// Previous values of the buttons
byte upPrev = 0;
byte downPrev = 0;
byte leftPrev = 0;
byte rightPrev = 0;
byte aPrev = 0;
byte bPrev = 0;

void setup() {

  // Starts the screen  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // IMPORTANT: Remember to change the screen code to your I2C screen code. You can get it easily by running this program -> https://github.com/ChobbyCode/Oled-I2C-Screen-Port-Grabber
  display.fillScreen(0);
  display.display();

  // Setups the inputs
  pinMode(up,INPUT_PULLUP);
  pinMode(down,INPUT_PULLUP);
  pinMode(left,INPUT_PULLUP);
  pinMode(right,INPUT_PULLUP);
  pinMode(a,INPUT_PULLUP);
  pinMode(b,INPUT_PULLUP);
}

void loop() {
}
