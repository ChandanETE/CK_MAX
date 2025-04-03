/*

EYE DEMONSTRATION WITH CUSTOM CHARACTER
CHANDAN KUMAR MONDAL
3 APRIL 2025

	     a        
		+-----+         
  f |     | b           
		|  g  |            
		+-----+            
  e |     | c          
		|     |      
		+-----+    
		   d     dp
	   (DISPLAY)


     byte position
     
     0 b dp a b c d e f g


*/

#define left_eye 3 // left eye position
#define right_eye 4 // irght eye position


// Define the expression of eyes..
byte frontLook = 0b01111110;
byte downlook = 0b00011101;
byte uplook = 0b01100011;
byte closeEye = 0b00000001;
byte rightLook = 0b01111000;
byte leftLook = 0b01001110;
byte downRightLook = 0b00011000;
byte downLeftLook = 0b00001100;
byte upLeftLook = 0b01000010;
byte upRightLook = 0b01100000;

// main library...
#include <CK_MAX.h>

#define VCC 3
#define GND 4
#define DIN 5
#define CS 6
#define CLK 7

#define NUMBER_OF_DEVICE 1



CK_MAX mydisplay(VCC, GND, DIN, CS, CLK, NUMBER_OF_DEVICE); // Directly place the module on the board, otherwise you can use the next object.. 
//CK_MAX mydisplay(DIN, CLK, CS, NUMBER_OF_DEVICE);

void setup() {
  mydisplay.begin(); // begin the display
  mydisplay.Set_Brightness(5); // set the brightness
  mydisplay.AutoRefresh(false); // must be false, if not then you see only one eye..
}

void loop() {
  look();
  delay(1000);

  eyeClose();
  delay(90);

  look();
  delay(1000);

  eyeClose();
  delay(50);

  lookLeft();
  delay(500);

  eyeClose();
  delay(60);

  lookRight();
  delay(500);

  eyeClose();
  delay(50);


  lookDownLeft();
  delay(500);

  eyeClose();
  delay(50);

  lookDownRight();
  delay(500);

  eyeClose();
  delay(50);

  look();
  delay(2000);

  eyeClose();
  delay(50);

  lookUpRight();
  delay(500);

  eyeClose();
  delay(50);

  lookUpLeft();
  delay(500);

  eyeClose();
  delay(50);

  confused();
  delay(2000);

  eyeClose();
  delay(50);

  look();
  delay(1000);

  wink();
  delay(300);

  look();
  delay(1000);

  eyeClose();
  delay(80);
}

void look() {
  mydisplay.ShowMe(left_eye, frontLook);
  mydisplay.ShowMe(right_eye, frontLook);
}

void eyeClose() {
  mydisplay.ShowMe(left_eye, closeEye);
  mydisplay.ShowMe(right_eye, closeEye);
}

void lookDown() {
  mydisplay.ShowMe(left_eye, downlook);
  mydisplay.ShowMe(right_eye, downlook);
}

void lookLeft() {
  mydisplay.ShowMe(left_eye, leftLook);
  mydisplay.ShowMe(right_eye, leftLook);
}

void lookRight() {
  mydisplay.ShowMe(left_eye, rightLook);
  mydisplay.ShowMe(right_eye, rightLook);
}

void lookUp() {
  mydisplay.ShowMe(left_eye, uplook);
  mydisplay.ShowMe(right_eye, uplook);
}

void lookDownRight() {
  mydisplay.ShowMe(left_eye, downRightLook);
  mydisplay.ShowMe(right_eye, downRightLook);
}

void lookDownLeft() {
  mydisplay.ShowMe(left_eye, downLeftLook);
  mydisplay.ShowMe(right_eye, downLeftLook);
}

void lookUpRight() {
  mydisplay.ShowMe(left_eye, upRightLook);
  mydisplay.ShowMe(right_eye, upRightLook);
}

void lookUpLeft() {
  mydisplay.ShowMe(left_eye, upLeftLook);
  mydisplay.ShowMe(right_eye, upLeftLook);
}

void confused() {
  mydisplay.ShowMe(left_eye, frontLook);
  mydisplay.ShowMe(right_eye, downlook);
}

void wink() {
  mydisplay.ShowMe(left_eye, frontLook);
  mydisplay.ShowMe(right_eye, closeEye);
}
