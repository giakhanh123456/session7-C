#include<stdio.h>

int main(){
	int a,b;
	printf("nhap so hang: ");
	scanf("%d", &a);
	printf("nhap so cot: ");
	scanf("%d", &b);
		int arrayint[a][b];
	for(int i = 0; i < a; i++){	
	for(int j = 0; j < b; j++){
		printf("array[%d][%d] = ",i,j);
		scanf("%d", &arrayint[i][j]);
	  }
    }
    for(int i = 0; i < a; i++){	
	for(int j = 0; j < b; j++){
		printf("%d ", arrayint[i][j]);
	  }
	  printf("\n");
    }
    return 0;
}
	
