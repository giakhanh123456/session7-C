#include<stdio.h>

int main(){
	int arrayint[] = {1,2,3,4,5};
	int dodai;
	dodai = sizeof(arrayint) / sizeof(arrayint[0]);
	for(int i = 0; i < dodai; i++){
		printf("phan tu tai vi tri i = %d la %d\n",i,arrayint[i]);
	}
	printf("do dai cua mang la: %d\n",dodai);
	return 0;
}
