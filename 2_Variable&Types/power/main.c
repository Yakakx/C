#include <stdio.h>

int main(){
    int n, p, d, r=1;
    int i=1;
    scanf("%d %d %d",&n,&p,&d);
    while(i<=p){
        r = (r*n)%d;
        i++;
    }
    printf("%d",r);
    return 0;
}