#include <stdio.h>

int gcd(int x, int y, int *cnt);

int main(void) {
    int x, y;
    int count=0;
    
    scanf("%d %d", &x, &y);
    printf("%d\n%d",count,gcd(x, y, &count));
    return 0;

}
int gcd(int x, int y, int *cnt) {
    (*cnt)++;
    if (x == 0) {
        return y;
    }else if(x<0){
        return gcd(y, -1 * x, cnt);
    }else if(x > y){
        return gcd(y, x, cnt);
    }else {
        return gcd(y % x, x, cnt);
    }
}
