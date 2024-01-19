#include <stdio.h>

int main(){
	int temp, g[60];
	int max=0, min=100;
	for(int i=0; i<60; i++){
		scanf("%d",&temp);
		g[i]=temp;
		if(temp>=max){
			max=temp;
		}
		if(temp<=min){
			min=temp;
		}
	}
	for(int i=0; i<60; i++){
		printf("%.f\n",60.0+40.0*(g[i]-min)/(max-min));
	}
	return 0;
}