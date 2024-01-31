#include <stdio.h>

int main(void){
    int n; 
    scanf("%d",&n);
    int num1=0, num2=1, sum, temp;
    for(int i=2;i<=n;i++){
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
    printf("%d",sum);
}