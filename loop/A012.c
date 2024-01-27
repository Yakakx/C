#include <stdio.h>

int main(void){
    int input; 
    scanf("%d",&input);
    for(int i=2;i<=input;i++){
        while(input%i==0){
            printf("%d",i);
            if(input/i>1){
                printf("*");
            }
            input/=i;
        }
    }
}