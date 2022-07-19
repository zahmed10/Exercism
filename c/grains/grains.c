#include "grains.h"

uint64_t square(uint8_t index) {
    uint64_t ans= pow(2, index-1);
    if (index>=65){
        ans= 0;
    } return ans;
}
uint64_t total(void) {
    uint64_t total = 0;
    for (uint64_t power=0; power<65; power++){
        total+=square(power);
    }
    return total;
}
