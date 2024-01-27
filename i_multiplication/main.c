#include <stdio.h>

int main(){
    int a1, a2, i1, i2;
    scanf("%d %d %d %d",&a1, &i1, &a2, &i2);
    int a_res = a1*a2 - i1*i2;
    int i_res = a1*i2 + a2*i1;
    printf("%d%+di",a_res,i_res);
    return 0;
}