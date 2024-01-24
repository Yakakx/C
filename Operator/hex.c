#include <stdio.h>

int main(){

    char input;
    while(scanf("%c",&input)!=EOF){
        if(input!=' '){
            printf("%X ",input);
        }
    }
    return 0;
}