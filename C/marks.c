#include <stdio.h>
int main()
{
	int marketing;
	printf("Enter the marks for marketing:");
	scanf("%d",&marketing);
	int management;
	printf("Enter the marks for management:");
	scanf("%d",&management);
	int operations;
	printf("Enter the marks for operations:");
	scanf("%d",&operations);
	int finance;
	printf("Enter the marks for finance:");
	scanf("%d",&finance);
	int strategy;
	printf("Enter the marks for strategy:");
	scanf("%d",&strategy);
	int agg=(management+marketing+operations+finance+strategy);
	printf("%d\n", agg);
	float percentage = (agg * 100)/500;
	printf("%f\n", percentage);
}