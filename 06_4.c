#include <stdio.h>

void f(int i);
int main(void) {
    char variable;
    char souce;
    scanf("%c", &souce);
    for (int i = 0; i < 5; i++) {
        variable = souce-4;
        f(i);
        for (int j = 0; j <= i; j++) {
            printf("%c", variable++);
        }
        for(int k = 0; k<=i-1; k++){
            printf("%c", variable--);
        }
        printf("%c", '\n');
    }
    return 0;
}


void f(int i) {
    while (4 - i != 0) {
        printf(" ");
        i++;
    }
}