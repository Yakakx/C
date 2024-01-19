#include <stdio.h>

int main(){
    double height, weight, bmi;
    scanf("%lf %lf",&height,&weight);
    bmi=weight/(height*height);
    if(bmi<18.5){
        printf("%g\ntoo thin",bmi);
    }
    else if(bmi>=18.5 && bmi<24){
        printf("%g\nstandard",bmi);
    }
    else{
        printf("%g\ntoo fat",bmi);
    }
}