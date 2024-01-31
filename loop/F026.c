#include <stdio.h>

int main(void){
    double d;
    int count;
    scanf("%lf",&d);
    while(d>=0.00001){
        count++;
        d/=2;
    }
    printf("%d",count);
}
