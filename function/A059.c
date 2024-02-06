#include <stdio.h>
long long int fac(int x);
int main(void){
    int n;
    long long int ans;
    scanf("%d",&n);
    ans = fac(n);
    printf("%lld",ans);
}
long long int fac(int x){
    if(x==1||x==0){
        return 1;
    }else{ 
        return x*fac(x-1);
    }
}