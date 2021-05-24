#include <stdio.h>
int main()
{
	int sp, profit, cp;
	printf("Enter selling price for 15 items:");
	scanf("%d",&sp);
	printf("\nEnter Profit:");
	scanf("%d",&profit);
	cp=profit-(sp/15);
	printf("Cost price for one item is: %d\n", cp);
}