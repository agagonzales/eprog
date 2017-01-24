#include <stdio.h>
 
int main(){
    int i;
	  int j=0;
    
    for(i=2; i<=23456789; i+=2){
        j+=i;
    }
 
    printf("%d", j);
 
}
