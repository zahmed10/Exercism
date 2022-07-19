#include "grains.h"

uint64_t square(uint8_t index) {
    uint64_t ans= pow(2, index-1);
    if (index>=65){
        ans= 0;
    } return ans;
}
uint64_t total(void) {
    // int cnt;
    // uint64_t power = 64;
    // if (power == 0){
    //     return 1;
    // } else {
    //     return (square(power) + square(power-1));
    // }
    uint64_t total = 0;
    for (uint64_t power=0; power<65; power++){
        total+=square(power);
    }
    return total;
}

// main (){
//     printf("%" PRIu64, total());
// }
