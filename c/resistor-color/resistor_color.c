#include "resistor_color.h" 

int color_code(resistor_band_t color){
    switch (color){
        case(BLACK): return 0;
        case(BROWN): return 1;
        case(RED): return 2;
        case(ORANGE): return 3;
        case(YELLOW): return 4;
        case(GREEN): return 5;
        case(BLUE): return 6;
        case(VIOLET): return 7;
        case(GREY): return 8;
        case(WHITE): return 9;
        
    }
}

resistor_band_t colors(){

    char * colors[10] = {
    "BLACK",
    "BROWN",
    "RED",
    "ORANGE",
    "YELLOW",
    "GREEN",
    "BLUE",
    "VIOLET",
    "GREY",
    "WHITE" 
    };

    return colors;

    
}