#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	
	  if(num%3==0){
		  printf("Pogi");
	  }
  	if(num%5==0){
		  printf("Ed");
		}
  	if(num%3==0 && num%5==0){
		  printf( "Ed pogi");
  	}		
}
	
	
	
	
