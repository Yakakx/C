#include <stdio.h>

int main(void){
    int n, count;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i!=0||i==1){
            printf(" %d",i);
            count++;
        }
        if(count%10==0&&count!=0){
            printf("\n");
        }
    }
}