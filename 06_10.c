#include <stdio.h>
#define SIZE 8
int main(void) {
    int numbers[SIZE];
    for (int j = 0; j < SIZE; j++) {
        scanf("%d", &numbers[j]);
    }
    for (int i = SIZE-1; i>=0; i--) {
        printf("%d\t", numbers[i]);
    }
    return 0;
}