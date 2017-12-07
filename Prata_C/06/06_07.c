#include <stdio.h>
int main(void){
    double f1, f2;
    while((scanf("%lf %lf", &f1, &f2))==2){
        printf("%.2lf\n", (f1-f2)/(f1*f2));
    }
    return 0;
}