#include <stdio.h>

int main(void){
    int n, count=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if (count == 2) {
            printf("%d\n", i);
        }
        count = 0; 
    }
}