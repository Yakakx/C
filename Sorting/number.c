#include <stdio.h>
#define len 3

int main(){
    int num[len],temp;
    for(int i=0; i<3; i++){
        scanf("%d",&num[i]);
    }
    for(int i=0; i<len; i++){
        for(int j=i;j<len;j++){
            if(num[j]<num[i]){
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }
    for(int i=0; i<len; i++){
        printf("%d ",num[i]);
    }
    return 0;
}