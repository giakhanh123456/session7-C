#include<stdio.h>

int main(){
	int arrayint[5] = {1,2,3,4,5};
	int max, min;
	for(int i = 0; i < 5; i++){
		if(arrayint[i] >= arrayint[0]){
			max = arrayint[i];
		}
		if(arrayint[i] <= arrayint[0]){
			min = arrayint[i];
		}
	}
	printf("phan tu lon nhat la: %d\n",max);
	printf("phan tu nho nhat la: %d\n",min);
	return 0;
}
