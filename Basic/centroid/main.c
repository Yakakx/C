#include <stdio.h>


int main(){
    float x1, x2, x3, y1, y2, y3;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("(%.3f,%.3f)\n",(x1+x2+x3)/3,(y1+y2+y3)/3);
    return 0;
}