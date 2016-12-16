#include<stdio.h>
#include<math.h>

int main()
{
	float num1, num2;
	printf("Hello!\n\n");
	printf("Enter defree fahrenheit: ");
	scanf("%f", &num1);
	printf("Degree Celsius: %.2f", (num1-32)*0.555555);
	
	return 0;
	
}
