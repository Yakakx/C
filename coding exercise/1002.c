#include <stdio.h>

int main(void){
	int a, b;
  	while(1){
      	scanf("%d %d",&a, &b);
      	if(a==0&&b==0){
			break;
        }else if(a<b){
        	printf("%d",b);
        }else if(a>b){
          printf("%d",a);
        }else if(a==b){
          printf("%d",a);
      	}
    }
}