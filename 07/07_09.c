#include <stdio.h>

int main(void) {
    int number = 1;
    int div = 0;
    printf("Please enter the number: \n");
    do {
        scanf("%d", &number);
        if (number <= 0)
            printf("Wrong number. Try again:\n");
    }while(number<=0);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0)
            div++;
    }
    if (div > 2) {
        printf("Number is not prime");
    } else {
        for (int i = 2; i <= number; i++) {
            div = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0)
                    div++;
            }
            if (div <= 2)
                printf("%d\n", i);
        }
    }

    return 0;
}
