/**
 *    Custom Animation
      Chandan kumar Mondal
      8 April 2025


       a
		+-----+ 
  f |     | b 
		|  g  |
		+-----+
  e |     | c
		|     |
		+-----+ 
		   d  
	   (DISPLAY)

     bit postion
     0 b dp a b c d e f g
 */


#include <CK_MAX.h>

// you can remove VCC and GND if you don't want to place the module on the board directly.
#define VCC 3
#define GND 4
#define DIN 5
#define CS 6
#define CLK 7
#define NUMBER_OF_DEVICE 1

CK_MAX mydisplay(VCC, GND, DIN, CS, CLK, NUMBER_OF_DEVICE);
// CK_MAX d(DIN, CLK, CS, NUMBER_OF_DEVICE);

#define Left_Eye 3
#define Right_Eye 4

#define Look_Front 0b01111110
#define Look_Down 0b00011101
#define Look_Up 0b01100011
#define Look_Up_Left 0b01000010
#define Look_Up_Right 0b01100000
#define Eye_Close 0b00000001
#define Look_Down_Left 0b00001100
#define Look_Down_Right 0b00011000
#define Look_Right 0b01111000
#define Look_Left 0b01001110

void setup() {
  mydisplay.begin(); // begin the module 
  mydisplay.Set_Brightness(5); // set the brightness
  mydisplay.AutoRefresh(false); // must be false, otherwise you can see the only one eye
}

void loop() {
  look();
  delay(1000);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();
  lookup();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  lookdown();
  delay(500);
  eyeBlink();

  lookleft();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();

  lookright();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();

  lookupleft();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();

  lookupright();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();

  lookdownleft();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();

  lookdownright();
  delay(500);
  eyeBlink();
  look();
  delay(1000);
  eyeBlink();

  lookconfused();
  delay(2000);
  eyeBlink();
  look();
  delay(1000);

  wink();
  delay(200);
  look();
  delay(1000);
}

void look() {
  mydisplay.ShowMe(Left_Eye, Look_Front);
  mydisplay.ShowMe(Right_Eye, Look_Front);
}

void lookdown() {
  mydisplay.ShowMe(Left_Eye, Look_Down);
  mydisplay.ShowMe(Right_Eye, Look_Down);
}

void eyeClose() {
  mydisplay.ShowMe(Left_Eye, Eye_Close);
  mydisplay.ShowMe(Right_Eye, Eye_Close);
}

void lookup() {
  mydisplay.ShowMe(Left_Eye, Look_Up);
  mydisplay.ShowMe(Right_Eye, Look_Up);
}

void lookright() {
  mydisplay.ShowMe(Left_Eye, Look_Right);
  mydisplay.ShowMe(Right_Eye, Look_Right);
}

void lookleft() {
  mydisplay.ShowMe(Left_Eye, Look_Left);
  mydisplay.ShowMe(Right_Eye, Look_Left);
}

void eyeBlink() {
  eyeClose();
  delay(80);
}

void lookconfused() {
  mydisplay.ShowMe(Left_Eye, Look_Front);
  mydisplay.ShowMe(Right_Eye, Look_Down);
}

void wink() {
  mydisplay.ShowMe(Left_Eye, Look_Front);
  mydisplay.ShowMe(Right_Eye, Eye_Close);
}

void lookupleft() {
  mydisplay.ShowMe(Left_Eye, Look_Up_Left);
  mydisplay.ShowMe(Right_Eye, Look_Up_Left);
}

void lookupright() {
  mydisplay.ShowMe(Left_Eye, Look_Up_Right);
  mydisplay.ShowMe(Right_Eye, Look_Up_Right);
}

void lookdownright() {
  mydisplay.ShowMe(Left_Eye, Look_Down_Right);
  mydisplay.ShowMe(Right_Eye, Look_Down_Right);
}

void lookdownleft() {
  mydisplay.ShowMe(Left_Eye, Look_Down_Left);
  mydisplay.ShowMe(Right_Eye, Look_Down_Left);
}
