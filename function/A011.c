#include <stdio.h>
#include <math.h>

int prime(int a);
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(prime(i)==1){
                printf("%d\n",i);
            }
        }
    }
}
int prime(int a){
    int count=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            count++;
            break;
        }
    }
    if(count!=0){
        return 0;
    }else{
        return 1;
    }
}