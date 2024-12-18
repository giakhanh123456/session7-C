#include<stdio.h>

int main(){
	int arrayint[5];
	for(int i = 0; i < 5; i++){
		printf("array[%d] = ",i);
		scanf("%d", arrayint + i);
	}
	for(int i = 0; i < 5; i++){
		printf("phan tu tai vi tri i = %d la %d\n",i,arrayint[i]);
	}
	return 0;
}
