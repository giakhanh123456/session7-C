#include<stdio.h>
#include<math.h>

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
	int dem = 0;
	int value = arrayint[i];
	if(value < 2){
		dem = 1;
		break;
	}else{
	for(int i = 2; i <= sqrt(value); i++){
		if(value % i == 0){
			dem = 1;
		}
	  }
    }
    if(dem == 0){
    	printf("%d ", value);
	}
  }
	return 0;
}
