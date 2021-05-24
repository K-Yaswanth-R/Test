#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int count=0;

	while (n > 0) {
		int rem = n%10;
		
		count = count + rem;
		n = n/10;
		printf("Number = %d; Remainder = %d;\n", n, rem);
	}
	printf("sum of digits : %d \n ",count);
}