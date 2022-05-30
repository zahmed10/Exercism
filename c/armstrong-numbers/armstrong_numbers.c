#include "armstrong_numbers.h"

// count_num_digits function code from https://codeforwin.org/2016/10/c-program-to-count-number-of-digits-in-number.html
int count_num_digits(int input)
{
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
    } while (num != 0);

    return count;
}

bool is_armstrong_number(int candidate)
{ // int candidate
    // Function code from https://stackoverflow.com/questions/8671845/iterating-through-digits-in-integer-in-c
    // int i = 1191223;
    // char buffer[count_num_digits(candidate)];
    // char *j;
    // snprintf(buffer, count_num_digits(candidate), "%i", i);
    // for (j = buffer; *j; ++j)
    // { /* digit is in *j - '0' */
    //     // int num = buffer[j];
    //     int y = atoi(buffer[j]); // Using atoi() // https://www.tutorialspoint.com/how-do-i-convert-a-char-to-an-int-in-c-and-cplusplus
    // }

    // https://stackoverflow.com/questions/9655202/how-to-convert-integer-to-string-in-c
    // int someInt = 368;
    char str[12];
    sprintf(str, "%d", candidate);
    printf("%s", str);

    int sum = 0;
    for (int i = 0; i <= (int)strlen(str); i++)
    { // https://www.freecodecamp.org/news/the-c-beginners-handbook/#loops
        /* instructions to be repeated */

        sum += (int)str[i];
    }

    bool is_armstrong;
    if (candidate == sum)
    {
        is_armstrong = true;
    }
    else
    {
        is_armstrong = false;
    }
    return is_armstrong;
}

// int main(int argc, char const *argv[])
// {
//     /* code */
//     is_armstrong_number(4);
// }
