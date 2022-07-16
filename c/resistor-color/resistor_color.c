#include "resistor_color.h" 



int color_code(resistor_band_t color){ 
    return color;
}

resistor_band_t * colors(){

    static resistor_band_t colors[10] = {
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
    };

    // resistor_band_t * colorPt = &colors[0];

    // return colorPt;

    return colors;

    // resistor_band_t allColors = BLACK;

    // resistor_band_t * allColors[] = {
    // BLACK,
    // BROWN,
    // RED,
    // ORANGE,
    // YELLOW,
    // GREEN,
    // BLUE,
    // VIOLET,
    // GREY,
    // WHITE};

    // return allColors;

    
}
