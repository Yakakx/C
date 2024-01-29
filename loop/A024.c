#include <stdio.h>

int main(void){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i+=2){
        sum+=i*(i+2);
    }
    printf("%d",sum);
}