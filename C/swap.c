#include <stdio.h>
int main()
{
	int c;
	printf("Enter c:");
	scanf("%d",&c);
	int d;
	printf("Enter d:");
	scanf("%d",&d);	
	c=c+d;
	d=c-d;
	c=c-d;
	printf("After swap: %d %d \n", c,d);
}