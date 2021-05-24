#include <stdio.h>
int main() {
	int salary;
	printf("Enter the salary:");
	scanf("%d",&salary);
	int DA=(40*salary)/100;
	int HR=(20*salary)/100;
	int gross=salary + DA + HR;
	printf("gross: %d \n",gross);
}

