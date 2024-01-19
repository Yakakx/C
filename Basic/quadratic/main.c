#include <stdio.h>

int main(){
    float a, b, c;
    float peak;
    float min;
    scanf("%f %f %f",&a,&b,&c);
    peak = -b/(2*a);
    min = a*peak*peak+b*peak+c;
    printf("%g",min);
    return 0;
}