#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d\n",&m,&n);
    printf("%d / %d=%d\n",m,n,m/n);
    printf("%d mod %d=%d",m,n,m%n);
    return 0;
}