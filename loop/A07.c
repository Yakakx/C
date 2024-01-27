#include <stdio.h>

int main(void){
    int num1, num2, temp, res=1;
    scanf("%d %d",&num1,&num2);
    while(num1%num2!=0){
        res = num1%num2;
        temp = num2;
        num1 = temp;
        num2 = res;
    }
    if(res<0){
        res*=-1;
    }
    printf("%d",res);  
}