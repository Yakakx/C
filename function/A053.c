#include <stdio.h>

void swap(int *x, int *y);

int main(void){
    int n;
    scanf("%d", &n);
    int array[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[j] < array[i]){
                swap(&array[i], &array[j]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }    

    return 0;
}

// Swap function definition
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
