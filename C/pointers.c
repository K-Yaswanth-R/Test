#include <stdio.h>
int main()
{
	int *e = malloc(sizeof(int));
	//float *r;
	//char *n;
	printf("e = %p\n",e);
	printf("*e = %d\n",*e);
	scanf("%d", e);
	printf("============\n");
	printf("e = %p\n",e);
	printf("*e = %d\n",*e);

	/*scanf("Enter Value: %f \n", r);
	printf("f: %f \n", r);

	scanf("Enter char: %c \n", n);
	printf("c: %c \n", n);*/
}