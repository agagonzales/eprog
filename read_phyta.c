#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int c, a, b;
	
       fscanf(myFile, "%d", &a);
       fscanf(myFile, "%d", &b);
        printf("INPUT:\n");
        printf("a = %d\n", a);
        printf("b = %d\n\n", b);
		   fprintf(myFile, "%d", c);
		   printf("OUTPUT\nc = %d", c = sqrt((a*a)+(b*b)));
    

}
