#include <stdio.h>
double result(double d1, double d2);
int main(void){
    double f1, f2;
    while((scanf("%lf %lf", &f1, &f2))==2){
        printf("%.2lf\n", result(f1, f2));
    }
    return 0;
}
double result(double d1, double d2){
    return (d1-d2)/(d1*d2);
}