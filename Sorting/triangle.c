#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a ,&b, &c);
    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b&&a==c&b==c){
            printf("regular triangle");
        }
        else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
            if(a==b||b==c||a==c){
                printf("isosceles righttriangle"); 
            }
            else{
                printf("rectangular triangle"); 
            }
        }
        else if(a==b||b==c||a==c){
            printf("isosceles triangle");
        }
        else if(a*a<b*b+c*c||b*b<a*a+c*c||c*c<a*a+b*b){
            printf("acute triangle");
        }
        else{
            printf("obtuse triangle");
        }
    }
    else{
        printf("not a triangle");
    }
    return 0;
}
/*
not a triangle
regular triangle
isosceles righttriangle
isosceles triangle
rectangular triangle
obtuse triangle
acute triangle
*/