#include <stdio.h>

int main() {
        char arr[6];
        char a='F';
        for(int i=0; i<6; i++) {
            arr[i] = a;
            a--;
            for (int j = 0; j<=i; j++) {
                printf("%c", arr[j]);
            }
            printf("%5c", '\n');
        }
        return 0;
    }