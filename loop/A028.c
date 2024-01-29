#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    double sum;
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        sum+=n%7*(pow(10,i));
        n/=7;
    }
    printf("%g",sum);
}