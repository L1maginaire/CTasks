#include <stdio.h>

#define SIZE 8

int main(void) {
    double arr1[SIZE];
    double arr2[SIZE];
    double sum=0;
    for(int i = 0; i<SIZE; i++){
        arr1[i] = (double)i*11.1;
        sum += arr1[i];
        arr2[i] = sum;
    }
    for(int i = 0; i<SIZE; i++)
        printf("%7.2f\t", arr1[i]);
    printf("%c", '\n');
    for(int i = 0; i<SIZE; i++)
        printf("%7.2f\t", arr2[i]);
    return 0;
}