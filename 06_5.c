#include <stdio.h>
int main(void) {
    int min, max;
    scanf("%d %d", &min, &max);
    for (; min <= max; min++) {
        printf("%5d\t%5d\t%5d\n", min, min*min, min*min*min);
    }
    return 0;
}