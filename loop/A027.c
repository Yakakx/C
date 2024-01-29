#include <stdio.h>
#include <math.h>

int main(void){
    char s[5]; 
    double sum;
    for(int i=0;i<5;i++){
        scanf("%c",&s[i]);
    }
    for(int i=0;i<5;i++){
        if(s[i]-'0'<=9){
            sum+=(s[i]-'0')*pow(16,(4-i));
        }
        else if(s[i]-'A'<=6){
            sum+=((s[i]-'A')+10)*pow(16,(4-i));
        }
        else{
            sum+=((s[i]-'a')+10)*pow(16,(4-i));
        }
    }
    printf("%g",sum);
}