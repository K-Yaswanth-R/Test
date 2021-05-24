#include <stdio.h>
int main()
{
	int dis_km;
	printf("Enter the distance in km: ");
	scanf("%d",&distance);
	
	int meters=(dis_km * 1000);
	int cm = (meters * 100);
	float inches = (cm / 2.54);
	int feet = (inches / 12);

	printf("meters: %d \n",meters);
	printf("feet: %d \n",feet);
	printf("inches: %f \n",inches);
	printf("cm: %d \n",cm);

}