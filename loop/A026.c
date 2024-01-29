#include <stdio.h>
#include <math.h>

int main(void){
    char s[5]; 
    double sum;
    for(int i=0;i<5;i++){
        scanf("%c",&s[i]);
    }
    for(int i=0;i<5;i++){
        sum+=(s[i]-'0')*pow(7,(4-i));
    }
    printf("%g",sum);
}