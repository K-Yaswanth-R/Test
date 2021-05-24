#include <stdio.h>
int main()
{
	float f;
	printf("Enter the temperature in F:");
	scanf("%f", &f);
	float C = (f - 32)*5/9;
	printf("%f\n",C);
}