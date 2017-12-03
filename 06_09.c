#include <stdio.h>
int main(void){
    int lim_u, lim_d;
    int sum=0;
    while((scanf("%d %d", &lim_d, &lim_u))==2){
        for(;lim_d<=lim_u; lim_d++){
            sum+=lim_d*lim_d;
        }
        printf("%d\n", sum);
    }
    return 0;
}