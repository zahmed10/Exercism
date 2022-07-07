#include "armstrong_numbers.h"
#include <stdio.h>

// Solution from https://www.geeksforgeeks.org/program-for-armstrong-numbers/

// Function to check whether the given number is
// Armstrong number or not
int is_armstrong_number(int candidate)
{
    // Calling order function
    int n = order(candidate);
    int temp = candidate, sum = 0;
    while (temp)
    {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }

    // If satisfies Armstrong condition
    if (sum == candidate)
        return 1;
    else
        return 0;
}

/* Function to calculate order of the number */
int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x / 10;
    }
    return n;
}

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}
