#include <stdio.h>

int main(){
	
	int i, ave, grades[3];
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);	
		ave=(grades[0]+grades[1]+grades[2])/3;	
	}
	printf("The average of the grades is: %d\n\n", ave);
	
	if(ave >= 75){
		printf("pass!!!!!!");
	}
	else{
		printf("fail!!!!!!");
	}
}

