#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	int j;
	int num;
	
	printf("Input number: ");
	scanf("%d", &num);
	for(i=num;i>0;i--){
			for(j=1;j<=i;j++){
			 	 printf("*");
		 	}
	  		printf("\n");
	}
	system("pause");
}
