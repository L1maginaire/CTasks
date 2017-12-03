#include <stdio.h>

#define SOURCE 1.0

int main(void) {
    double count;
    double sum = SOURCE;
    double subs = SOURCE;
    scanf("%lf", &count);
    for (int i = 1; i <= count; i++) {
        sum += SOURCE / (double) i;
        if (i % 2 != 0) {
            subs -= SOURCE / (double) i;
        } else{
            subs += SOURCE / (double) i;
        }
    }
    printf("%f\t%f", sum, subs);
    return 0;
}