#include <stdio.h>

#define RATE 0.08

int main(void) {
    double current_amount = 1000000;
    int years=0;
    do {
        current_amount-=100000;
        current_amount+=current_amount*RATE;
        years++;
    } while (current_amount>0);
    printf("%d", years);
    return 0;
}