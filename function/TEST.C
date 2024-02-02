#include <stdio.h>
int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = NULL;
    ptr = &arr[0]; //陣列也是一個指標，指向陣列中第一個數，ptr = &arr[0]
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", (ptr + i));
    }
}