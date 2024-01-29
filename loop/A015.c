#include <stdio.h>

int main(void){
    for(int a=1;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                for(int d=0;d<10;d++){
                    for(int e=0;e<10;e++){
                        int n = a*10000+b*1000+c*100+d*10+e;
                        int m = 11111*10*b+e;
                        if(n*a==m){
                            printf("%d %d %d %d %d",a, b, c, d, e);
                        }
                    }
                }
            }
        }
    }
}