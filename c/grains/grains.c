#include "grains.h"

uint64_t square(uint8_t index) {
    unsigned long long int ans;
    ans= pow(2, index-1);
    if (index>=65){
        ans= 0;
    } return ans;
}
uint64_t total(void) {
    // int cnt;
    int power = 64;
    if (power == 0){
        return 1;
    } else {
        return (square(power) + square(power-1));
    }
}
