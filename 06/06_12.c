#include <stdio.h>

#define SIZE 8

int main(void) {
    int numbers[SIZE];
    numbers[0]=1;
    int buffer = 2;
    for (int j = 1; j < SIZE; j++) {
        buffer *=2;
        numbers[j] = buffer;
    }
    int i = 0;
    do {
        printf("%d\n", numbers[i++]);
    } while (i<8);
    return 0;
}