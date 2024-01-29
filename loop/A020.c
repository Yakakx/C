#include <stdio.h>

int main(void){
    int a = 1;
    while(a%7!=3||a%9!=4||a%10!=2||a%11!=1){
        a++;
    }
    printf("%d",a);
}