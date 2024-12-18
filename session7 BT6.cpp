#include<stdio.h>

int main(){
	int arrayint[5] = {1,2,3,4,5};
	for(int i = 0; i < 5; i++){
		if(arrayint[i] % 2 == 0){
			arrayint[i] += 3;
		}else{
		    arrayint[i] += 2;
	    }   	
    }
		for(int i = 0; i < 5; i++){
		printf("%d,",arrayint[i]);
	}
	return 0;
}
