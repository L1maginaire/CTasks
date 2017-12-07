#include <stdio.h>

#define CONTRIBUTION 100
#define DAPHNE_RATE 0.1
int main(void) {
    double daphne=DAPHNE_RATE*CONTRIBUTION+CONTRIBUTION;
    double deidre=CONTRIBUTION*0.05+CONTRIBUTION;
    double percent;
    printf("1st year: Daphne: %.2f, Deidre: %.2f\n", daphne, deidre);
    int counter=1;
    while (deidre<daphne){
        daphne+=10;
        percent = deidre*0.05;
        deidre=deidre+percent;
        ++counter;
    }
    printf("%d year: %.2f, %.2f", counter, daphne, deidre);
    return 0;
}