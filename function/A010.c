#include <stdio.h>

int gcd(int a, int b, int c) {
    int flag = 0;
    for (int i = 2; i<c; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            flag = 1;
            break;
        }
    }
    return flag; 
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int a=1; a<n; a++){
        for(int b=a+1; b<n; b++){
            for(int c=b+1; c<n; c++){
                if(a*a+b*b==c*c){
                    if(gcd(a,b,c)==0){
                        printf("%d,%d,%d\n",a,b,c);
                    }
                }
            }
        }
    }
}

