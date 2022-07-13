#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

#include <ctype.h>

int color_code(char color);


typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE

} resistor_band_t;
resistor_band_t colors();

resistor_band_t chosenType = BLACK;

#endif
