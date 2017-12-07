#include <stdio.h>

#define LOW 8.75
#define SCN 9.33
#define THR 10.00
#define HIG 11.20

int main(void) {
    int choise;
    double hours;
    printf("1)$%.2f/h\t\t\t2)$%.2f/h\n3)$%.2f/h\t\t\t4)$%.2f/h\n5)Exit\n", LOW, SCN, THR, HIG);
    do {
        scanf("%d", &choise);
        switch (choise) {
            case 1:
                printf("Enter amount of hours: ");
                scanf("%lf", &hours);
                printf("%.2f", hours * LOW);
                return 0;
            case 2:
                printf("Enter amount of hours: ");
                scanf("%lf", &hours);
                printf("%.2f", hours * SCN);
                return 0;
            case 3:
                printf("Enter amount of hours: ");
                scanf("%lf", &hours);
                printf("%.2f", hours * THR);
                return 0;
            case 4:
                printf("Enter amount of hours: ");
                scanf("%lf", &hours);
                printf("%.2f", hours * HIG);
                return 0;
            case 5:
                break;
            default:
                printf("This number is not allowed! Try again:\n");
        }
    } while (choise != 5);
    return 0;
}
