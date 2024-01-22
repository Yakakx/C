#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    char c = a;
    char d = a+1;
    printf("%c:%d\n%c:%d",c,a,d,a+1);
}