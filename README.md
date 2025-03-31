# CK_MAX
## A library for 8 digits seven-segment module based on the MAX7219 driver.

If you are looking for a library for your 8 digits seven segments module, then this can be the best library for you. It provides the easiest and most beautiful features,
* One function for printing all kinds of data, like integers, characters, float, and strings.
* Multiple modules can use at the same time.
* Various types of Constructors, that help you to minimal coding and connection.
* Maybe it is the first time you can use Animations in your seven segments display. Sounds crazy but it is true.
* 21 different types of Animation.

## CONSTRUCTORS
> CK_MAX(uint16_t CS_pin);

There are 5 pins, VCC, GND, DIN, CLK, and CS in the display. VCC and GND are the power pins. The other 3 pins can be connected as your choice. If you connect CLK and DIN pins to the CLOCK and MOSI pins of your controller respectively then this function can be used. 
NOTE: This function supports only one Module.

> CK_MAX(uint16_t CS_pin, int Number_of_Given_device);

Same as the previous one, but when you use more than one module then use this library. 

> CK_MAX(uint16_t data_pin, uint16_t clock_pin, uint16_t CS_pin, int Number_of_Given_device);

If you want to connect DIN, CLK, and CS as your choice then you should use this one. 

> CK_MAX(uint16_t VCC, uint16_t GND, uint16_t DIN, uint16_t CS, uint16_t CLK, int Number_of_Given_Device);

When you want to connect all of the pins of the module even the power pins mean VCC and GND as your own choice then this function should be your choice. 

## FUNCTIONS (PRINTING)
>  void begin();

Begin your object.

> void Set_Brightness(byte given_bright);

Set the brightness of your display. 0 to 14 will be the range.

> void Set_Position(byte pos);

Set the position that you want to start the printing. 0 means the first digit, if use 1 digit then 7 will be the maximum value. But if you use "n" numbers of modules the maximum number will be (n*8-1).

>  void ShowMe(character/String/Float/Integer);

A most important function for printing. examples, ShwoMe(2021), ShowMe(3.14), ShowMe("Chandan"), ShowMe('C'). 

> void ShowMe(int position, byte sprite);

You can light up your customized digit.

> void AutoRefresh(boolean ar);

If you keep On the AutoRefresh() function using "AutoRefresh(1)", then your display automatically refreshed after new data comes. But keeping Off means "AutoRefresh(0)", your new data will be overlapped with your old data. suppose, you print ShowMe("Arduino"; then use ShowMe(123), you will see the display "123uino". 

>  void RefreshMe();

For washing out the display. 

## FUNCTIONS (ANIMATING)

> void AnimateMe(String message, All_Animations Animation, uint16_t duration, uint16_t wait);

One-sided animation, sample, AmimateMe("Arduino", SCROLL_LEFT, 50, 1000); If you try this function then you can see the scrolling display with "Arduino" text, that comes from the Right side of the display and will go left side of it. The transition speed will be 50 milliseconds. and hold for 1 second (1000 milliseconds).

> void AnimateMe(String message, All_Animations Animation, uint8_t number, uint16_t duration, uint16_t wait);

Double-sided Animation, like intro and outro. sample AmimateMe("Arduino", MAKE, BREAK, 70, 50, 2000); MAKE - Intro Animation, BREAK - Outro Animation, 70 - Intro animation transition time in milliseconds, 50 - Outro animation transition time, 2000 - Pause time. 

> void Set_Buffer_Count(uint8_t number);

This function only works with MAKE_BUFFER animation. By default, you get 3 spins for buffering. But using this library you can change the number. 

## ANIMATIONS NAME
* SCROLL_LEFT
* SCROLL_RIGHT
* SCROLL_DOWN
* SCROLL_UP
* MAKE_BUFFER
* SLICE_OWN
* SLICE_ALL
* SCAN_TOP
* SCAN_BOTTOM
* RAND_UP
* RAND_DOWN
* WAVE
* MAKE
* BREAK
* SCROLL_UP_SINGLE
* SCROLL_DOWN_SINGLE
* SCROLL_UP_RANDOM
* SCROLL_DONW_RANDOM
* GROW_UP
* GROW_DOWN
* RANDOMIZED


## VIDEO (YOUTUBE)
https://www.youtube.com/watch?v=prMTWiZlzSI&t=10s
