#include "grains.h"

uint64_t square(uint8_t index) {
    if (index>=65 || index == 0){
        return 0;
    } 
    // Shift operator reference: https://en.cppreference.com/w/c/language/operator_arithmetic#Shift_operators
    return 1ULL<<(index-1); 
}

uint64_t total(void) {
    return (0) - 1; // https://www.geeksforgeeks.org/sum-of-the-series-20-21-22-2n/
}
