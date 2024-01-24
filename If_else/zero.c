#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("N>0");
    }
    else if(n<0){
        printf("N<0");
    }
    else{
        printf("N=0");
    }
    return 0;
}