//MMR
#include<stdio.h>

int main(){
	
	int a;
	int b;
	int c;
	
	printf("Enter player1's MMR: ", a);
	scanf("%d", &a);
	
	printf("Enter player2's MMR: ", b);
	scanf("%d", &b);
	
	c = a - b;
		if(b>=a){
			printf("The difference of the MMR of two players is: %d", c = b - a);
			}
				else{
					printf("The difference of the MMR of two players is: %d", c);
				}
}
