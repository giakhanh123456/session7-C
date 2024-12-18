#include<stdio.h>

int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
		int arrayint[n];
	for(int i = 0; i < n; i++){
		printf("array[%d] = ",i);
		scanf("%d", arrayint + i);
	}
	for(int i = 0; i < n; i++){
		printf("phan tu tai vi tri i = %d la %d\n",i,arrayint[i]);
	}
	return 0;
}
