#include <stdio.h>

int main(){
    char a, b;
    scanf("%c",&a);
    int c = a;
    int d = c+1;
    b = d;
    printf("%c:%d\n%c:%d",a,c,b,d);
}