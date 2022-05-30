#include "armstrong_numbers.h"

// count_num_digits function code from https://codeforwin.org/2016/10/c-program-to-count-number-of-digits-in-number.html
int count_num_digits(int input) { 
    long long num = input;
    int count = 0;

    /* Input number from user */
    // printf("Enter any number: ");
    // scanf("%lld", &num);

    /* Run loop till num is greater than 0 */
    do
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    } while(num != 0);

    return count;
}

bool is_armstrong_number() { //int candidate
    return true;

}
