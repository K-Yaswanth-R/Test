#include <stdio.h>
int main()
{
	int num, sum=0,first,last;
	printf("Enter the number: ");
	scanf("%d",&num);
	last=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	first=num;
	sum=first+last;
	printf("Sum=%d\n",sum );
}