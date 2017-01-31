#include <stdio.h>

int main(){
	
	int i;
	int num_ones=0;
	int num[5];
	
	for(i=0; i<5; i++){
		
		printf("Enter number %d: ", i+1);
		scanf("%d", &num[i]);	
		
			
	}
	for(i=0; i<5;i++){
		if(num[i] == 1)
			num_ones++;
	}
	printf("ones: %d\n", num_ones);
	printf("zeroes: %d\n", 5-num_ones);

}
