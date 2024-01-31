#include <stdio.h>

int main(void){
    float n, sum=0, x=1;
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            x*=j;
        }
        sum+=(1/x);
        x= 1;
    }
    printf("%.5f",sum);
}