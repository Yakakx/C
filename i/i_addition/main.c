#include <stdio.h>

int main(void){
    int a1, a2, i1, i2;
    int a_res, i_res;
    scanf("%d %d %d %d", &a1, &i1, &a2, &i2);
    a_res = a1+a2;
    i_res = i1+i2;
    printf("%d%+di",a_res,i_res);
}