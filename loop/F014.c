#include <stdio.h>

int main(void){
    for(int i=32;i<=127;i++){
        printf("%c",i);
        if(i%16==0&&i!=32){
            printf("\n");
        }
    }
}