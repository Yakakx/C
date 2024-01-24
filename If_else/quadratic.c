#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a ,&b ,&c);
    int d=b*b-(4*(a*c));
    if(d>=0){
        printf("%.3f\n%.3f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }
    else{
        printf("No");
    }
    return 0;
}