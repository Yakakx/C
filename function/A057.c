#include <stdio.h>

int fac(int x, int *count);
int main(void){
    int n, count=0, ans;
    scanf("%d",&n);
    ans = fac(n,&count);
    printf("%d\nf(n)=%d",count,ans);
}
int fac(int x, int *count){
    (*count)++;
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }else{
        return(fac(x-1,count)+fac(x-2,count));
    }
}