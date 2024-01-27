#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, leg1, leg2;
    if(a>b&&a>c){
        max = a;
        leg1 = b;
        leg2 = c;
    }
    if(b>a&&b>c){
        max = b;
        leg1 = a;
        leg2 = c;
    }
    if(c>a&&c>b){
        max = c;
        leg1 = a;
        leg2 = b;
    }
    if(a==b&&a==c){
        max = a;
        leg1 = b;
        leg2 = c;
    }
    if(max<leg1+leg2){
        if(max==leg1){
            printf("regular triangle");
        }
        else if(max*max==leg1*leg1+leg2*leg2){
            if(leg1==leg2){
                printf("isosceles righttriangle");
            }
            else{
                printf("rectangular triangle");
            }
        }
        else if(leg1==leg2||max==leg1||max==leg2){
            printf("isosceles triangle");
        }
        else if(max*max>leg1*leg1+leg2*leg2){
            printf("obtuse triangle");
        }
        else{
            printf("acute triangle");
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