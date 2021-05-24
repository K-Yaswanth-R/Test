#include <stdio.h>
int main()
{
	int l;
	printf("Enter length:");
	scanf("%d",&l);
	int b;
	printf("Enter breadth:");
	scanf("%d",&b);
	int r=11;
	printf("Enter radius:");
	scanf("%d",&r);	
	printf("Area of Rect: %d\n",l*b);
	printf("Perimeter of Rect: %d\n", 2*(l+b));
	printf("Circumference of Circle: %f\n", 2*3.14*r);
}