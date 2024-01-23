#include <stdio.h>

int main(){
    int pow, rem, num=1, count=1; 
    scanf("%d",&pow);
    while(count<=pow){
        num*=2;
        num%=10;
        rem+=num;
        count++;
    }
    rem%=10;
        printf("%d",rem);
    return 0;
}