#include <stdio.h>

int main(void) {
    int even = 0;
    int evenav = 0;
    int odd = 0;
    int oddav = 0;
    int digit = 0;
    char ch;
    while ((ch = getchar()) != '0') {
        digit = ch - 48;
        if (digit % 2 == 0) {
            ++even;
            evenav += digit;
        } else {
            ++odd;
            oddav += digit;
        }
    }
    printf("Even: %d, Average(even):%d, Odd: %d, Average(odd): %d", even, evenav, odd, oddav);
    return 0;
}