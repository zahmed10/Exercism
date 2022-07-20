#include "grains.h"

uint64_t square(uint8_t index) {
    // uint64_t ans= pow(2, index-1);

    // Shift operator reference: https://en.cppreference.com/w/c/language/operator_arithmetic#Shift_operators
    // unsigned long long ulong_num = 0x1; 

    if (index>=65 || index == 0){
        return 0;
    } 
    // uint64_t ans= 1ULL<<(index-1); 
    return 1ULL<<(index-1); 
    // return ans;
}
uint64_t total(void) {
    // uint64_t total = 0;
    // for (uint64_t power=0; power<65; power++){
    //     total+=square(power);
    // }
    // unsigned long long ulong_num = 0x1; 
    return (0) - 1; // https://www.geeksforgeeks.org/sum-of-the-series-20-21-22-2n/
    // return total;
}
