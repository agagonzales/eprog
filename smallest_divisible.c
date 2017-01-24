#include<stdio.h>
#include<conio.h>

int main(){
	//int i;
	//int j;
	int num=0;
	
	while(1){
		num++;
		  if(num%6==0 && num%8 == 0 && num%9 == 0 && num%11 == 0 
		  && num%13 == 0 && num%14 == 0 && num%15 == 0 && num%17 == 0 
		  && num%18==0 && num%19 == 0 && num%20 == 0){
			  printf("%d", num);
				break;
		  }
	}
}

