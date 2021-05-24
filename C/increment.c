#include <stdio.h>
#include <math.h>
int main()
{
	int n, rem, cnt=0, sum=0;
	printf("Enter the num:");
	scanf("%d", &n);
	while (n>0)
	{
		rem=n%10;
		rem=rem+1;
		if (rem==10)
		{
			rem=0;
		}
		sum=sum+(rem*(pow(10, cnt)));
		//printf("suum = %f\n", pow(10, cnt));
		n=n/10;
		cnt++;
	}
	printf("Increment: %d",sum);
}