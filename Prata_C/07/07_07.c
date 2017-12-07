#include <stdio.h>

#define ORDINARYRATE 10.0
#define OVERRATE 15.0
#define SECTION 40.0
#define FSTST 300.0
#define FSTSTTAX .15
#define SCNST 450.0
#define SCNSTTAX  .2
#define RICHTAX 75;
#define LSTTAX .05

int main(void) {
    double intresult = 0.0;
    double overfulfillment = 0.0;
    double hours = 0.0;
    double finresult = 0.0;
    scanf("%lf", &hours);
    if (hours > SECTION) {
        overfulfillment = (hours - SECTION) * OVERRATE;
        intresult = overfulfillment + SECTION * ORDINARYRATE;
    } else {
        intresult = hours * ORDINARYRATE;
    }
    if (intresult < FSTST) {
        finresult = intresult - (intresult * FSTSTTAX);
    } else if (intresult > FSTST && intresult < SCNST) {
        double var = intresult - FSTST;
        intresult = FSTST - (FSTST * FSTSTTAX);
        double varresult = var - (var * SCNSTTAX);
        finresult = intresult + varresult;
    } else if (intresult > SCNST) {
        double var = intresult - SCNST;
        intresult = var - (var * LSTTAX);
        finresult = intresult + SCNST - RICHTAX;
    }
    printf("%.2f", finresult);

    return 0;
}
