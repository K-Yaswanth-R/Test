#include <stdio.h>
int main()
{
	int num,rev=0,rem,tmp;
	printf("Enter num:");
	scanf("%d",&num);
	tmp=num;
	while(tmp!=0)
	{
		rem=tmp%10;  	 //rem=4
		rev=rev*10+rem;  //rev=4
		tmp=tmp/10;      // tmp=

	}
	printf("rev no.: %d \n",rev);
}