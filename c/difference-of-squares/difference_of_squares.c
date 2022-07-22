#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) {
    unsigned int total = 0; 
    for (unsigned int index=1; index<=number; index++){
        total+=index*index;
    }
    return total;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int sum = 0;
    for (unsigned int index=1; index<=number; index++){
        sum+=index;
    }
    unsigned int total =  sum*sum;
    return total;
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
