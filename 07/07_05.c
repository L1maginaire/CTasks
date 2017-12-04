#include <stdio.h>

int main(void) {
    int even = 0;
    int evenav = 0;
    int odd = 0;
    int oddav = 0;
    char ch;
    while ((ch = getchar()) != '0') {
        switch (ch) {
            case '1':
            case '3':
            case '5':
            case '7':
            case '9':
                ++odd;
                oddav += (int) ch - 48;
                break;
            case '2':
            case '4':
            case '6':
            case '8':
                ++even;
                evenav += (int) ch - 48;
                break;
        }
    }
    printf("Even: %d, Average(even):%d, Odd: %d, Average(odd): %d", even, evenav, odd, oddav);
    return 0;
}
