#include <stdio.h>

int main(void){
    int a[8], temp;
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(a[j]<a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<8;i++){
		for(int j=i+1;j<8;j++){
			for(int k=0;k<8;k++){
			    if(k!=i&&k!=j)
			    printf("-%d",a[k]);
			}
		printf("\n");
		}
	}
}