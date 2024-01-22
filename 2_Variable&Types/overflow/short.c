#include <stdio.h>

int main(){
    short a = 0x7fff;
    printf("%hd\n",a);
    printf("%hd",a+1);
    return 0;
}