#include <stdio.h>

int main(void){
    int n, count=0;
    scanf("%d",&n);
    for(int i=2; i<n ; i++){
        if(i%3==0||i%2==0){
            count++;
            printf(" %d",i);
            if((count-9)%10==0&&n-i>2){
                printf("\n");
            }
        }
    }
}