#include <stdio.h>
int main()
{
	int m, note100=0, note50=0, note10=0;
	printf("Enter money:");
	scanf("%d",&m);
	if (m>=100)
	{
		note100=m/100;
		m=m%100;
	}
	if (m>=50)
	{
		note50=m/50;
		m=m%50;
	} 
	if (m >=10)
	{
		note10=m/10;
		m=m%10;
	}
	printf("100: %d\n",note100);
	printf("50: %d\n",note50);
	printf("10: %d\n",note10);
}