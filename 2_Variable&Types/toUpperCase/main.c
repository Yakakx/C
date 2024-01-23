#include <stdio.h>

int main(){
    char code; 
    while(scanf("%c", &code)!=EOF){
        if(code>='a' && code<='z'){
            printf("%c",code-32);  
        }
        else if(code==' '){
            printf("");
        }
        else{
            printf("%c",code); 
        }
    }
    return 0;
}