#include <stdio.h>

int main(void){
    int temp=2, input;
    scanf("%d",&input);
    for(int i=2;i<=input/2;i++){
        if(input%i==0){
            temp++;
            break;
        }
    }
    if(temp==2&&input!=1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}