#include <stdio.h>

int main(void){
    double n, sum=0;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        sum+=i*i*i*i;
    }
    printf("%.0lf",sum);
}