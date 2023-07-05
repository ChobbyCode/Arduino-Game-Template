
// This file is dedicated to managing the inputs

#include "inputManager.h"

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

void start(){
  // Setups the inputs
  pinMode(up,INPUT_PULLUP);
  pinMode(down,INPUT_PULLUP);
  pinMode(left,INPUT_PULLUP);
  pinMode(right,INPUT_PULLUP);
  pinMode(a,INPUT_PULLUP);
  pinMode(b,INPUT_PULLUP);
}

void checkInputs(){
  //tbh this is probs the most uglist code ever, but u do u and fix it if u want

  //Up
  
  if(digitalRead(up)==0){
    upDown();    
    if(upPrev != 0){
      upPressed();
    }
  }else{
    if(upPrev != 1){
      upReleased();
    }
  }

  //Down
  
  if(digitalRead(down)==0){
      downDown();
    if(downPrev != 0){
      downPressed();
    }
  }else{
    if(downPrev != 1){
      downReleased();
    }
  }

  //Left
  
  if(digitalRead(left)==0){
    leftDown();
    if(leftPrev != 0){
      leftPressed();
    }
  }else{
    if(leftPrev != 1){
      leftReleased();
    }
  }

  //Right
  
  if(digitalRead(right)==0){
    rightDown();
    if(rightPrev != 0){
      rightPressed();
    }
  }else{
    if(rightPrev != 1){
      rightReleased();
    }
  }

  //A
  
  if(digitalRead(a)==0){
      aDown();
    if(aPrev != 0){
      aPressed();
    }
 }else{
    if(aPrev != 1){
      aReleased();
    }
  }

  //B
  
  if(digitalRead(b)==0){
    bDown();
    if(bPrev != 0){
      bPressed();
    }
  }else{
    if(bPrev != 1){
      bReleased();
    }
  }

  saveInputs();
}

void saveInputs(){
  upPrev = digitalRead(up);
  downPrev = digitalRead(down);
  leftPrev = digitalRead(left);
  rightPrev = digitalRead(right);
  aPrev = digitalRead(a);
  bPrev = digitalRead(b);
}
