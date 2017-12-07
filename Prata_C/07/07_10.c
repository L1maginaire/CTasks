#include <stdio.h>

#define ALONE 17850.0
#define HEAD 23900.0
#define MARRIEDT 29750.0
#define MARRIEDF 14875.0
#define FSTTAX .15
#define SCNDTAX .28

int main(void) {
    int choise = 1;
    double result;
    double var;
    printf("Please select a category:\n1)Alone (15%% from %.2f or less and 28%% from above)\n2)Householder (15%% from %.2f or less and 28%% from above)\n3)Married, cooperative economy (15%% from %.2f or less and 28%% from above)\n4)Married, separated economy(15%% from %.2f or less and 28%% from above)\n", ALONE, HEAD, MARRIEDT, MARRIEDF);
    do {
        scanf("%d", &choise);
        switch (choise) {
            case 1:
                printf("Your income:\n");
                scanf("%lf", &result);
                if (result < ALONE) {
                    printf("%.2f", result - result * FSTTAX);
                } else {
                    var = result - ALONE;
                    printf("%.2f", (var - var * SCNDTAX) + (ALONE - ALONE * FSTTAX));
                }
                break;
            case 2:
                printf("Your income:\n");
                scanf("%lf", &result);
                if (result < HEAD) {
                    printf("%.2f", result - result * FSTTAX);
                } else {
                    var = result - HEAD;
                    printf("%.2f", (var - var * SCNDTAX) + (HEAD - HEAD * FSTTAX));
                }
                break;
            case 3:
                printf("Your income:\n");
                scanf("%lf", &result);
                if (result < MARRIEDT) {
                    printf("%.2f", result - result * FSTTAX);
                } else {
                    var = result - MARRIEDT;
                    printf("%.2f", (var - var * SCNDTAX) + (MARRIEDT - MARRIEDT * FSTTAX));
                }
                break;
            case 4:
                printf("Your income:\n");
                scanf("%lf", &result);
                if (result < MARRIEDF) {
                    printf("%.2f", result - result * FSTTAX);
                } else {
                    var = result - MARRIEDF;
                    printf("%.2f", (var - var * SCNDTAX) + (MARRIEDF - MARRIEDF * FSTTAX));
                }
                break;
            default:
                printf("Wrong number, select from 1 to 4\n");
                break;
        }
    } while (choise < 1 || choise > 4);

    return 0;
}
