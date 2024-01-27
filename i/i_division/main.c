#include <stdio.h>

int main(void){
    float x1, x2, i1, i2;
    scanf("%f %f %f %f",&x1,&i1,&x2,&i2);
    float denominator = x2*x2-(-1*(i2*i2));
    float x_res, i_res;
    x_res = x1*x2+(-1*(i1*(-1*i2)));
    i_res = x1*(-1*i2)+x2*i1;
    if(i_res==0){
        printf("%.3f",x_res/denominator);
    }
    else if(x_res==0){
        printf("%.3fi",i_res/denominator);
    }
    else{
        printf("%.3f%+.3fi",x_res/denominator,i_res/denominator);
    }
}