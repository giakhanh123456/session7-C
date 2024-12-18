#include<stdio.h>

int main(){
	int arrayint[5] = {1,2,3,4,5};
	int n = 0;
	for(int i = 0; i < 5; i++){
		if(arrayint[i] % 2 == 0){
			printf("phan tu chua so chan la %d\n",arrayint[i]);
			n = 1;
		} 
	}
	if(n == 0){
			printf("mang khong chua so chan\n");
		}	
	return 0;
}
