// dummytft.cpp
// Includes for dummy display
#include "dummytft.h"

scrseg_struct     dummytft_tftdata[TFTSECS] =               // Screen divided in 1 segment
{                                                           // One text line is 8 pixels
  { false, WHITE,   0,  8, "" },                            // 1 top line
} ;


//**************************************************************************************************
//                                      D S P _ F I L L R E C                                      *
//**************************************************************************************************
// Dummy routine to fill a rectangle.                                                              *
//**************************************************************************************************
void dummytft_dsp_fillRect ( int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color )
{} ;                                                        // Fill a rectange


//**************************************************************************************************
//                                      D I S P L A Y B A T T E R Y                                *
//**************************************************************************************************
// Dummy routine for this type of display.                                                         *
//**************************************************************************************************
void dummytft_displaybattery ( uint16_t bat0, uint16_t bat100, uint16_t adcval )
{
}


//**************************************************************************************************
//                                      D I S P L A Y V O L U M E                                  *
//**************************************************************************************************
// Dummy routine for this type of display.                                                         *
//**************************************************************************************************
void dummytft_displayvolume ( uint8_t vol )
{
}


//**************************************************************************************************
//                                      D I S P L A Y T I M E                                      *
//**************************************************************************************************
// Dummy routine for this type of display.                                                         *
//**************************************************************************************************
void dummytft_displaytime ( const char* str, uint16_t color )
{
}