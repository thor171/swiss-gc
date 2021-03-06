/* -----------------------------------------------------------
      IPLFontWrite.h - Font blitter for IPL ROM fonts
	      - by emu_kidid
	   
      Version 1.0 11/11/2009
        - Initial Code
   ----------------------------------------------------------- */

#ifndef IPLFontWrite_H
#define IPLFontWrite_H

#include "FrameBufferMagic.h"

#define wait_press_A() ({while((PAD_ButtonsHeld(0) & PAD_BUTTON_A)){VIDEO_WaitVSync();} while(!(PAD_ButtonsHeld(0) & PAD_BUTTON_A)){VIDEO_WaitVSync();}})

extern GXColor defaultColor;
extern GXColor disabledColor;
extern GXColor deSelectedColor;
extern char txtbuffer[2048];

void init_font(void);
void drawString(int x, int y, char *string, float scale, bool centered, GXColor fontColor);
int GetTextSizeInPixels(char *string);
float GetTextScaleToFitInWidth(char *string, int width);
float GetTextScaleToFitInWidthWithMax(char *string, int width, float max);

#endif
