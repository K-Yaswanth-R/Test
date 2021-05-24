#include <stdio.h>
int main()
{
	float population=80000;
	float men=(52* population)/100;
	float tot_lit=(48* population)/100;
	float men_lit=(35*population)/100;
	float women_lit= tot_lit - men_lit;
 	float women=population- men;
	float tot_ilit=population - tot_lit;
	float men_ilit=tot_ilit-men_lit;
	float women_ilit=tot_ilit - men_ilit;
	printf("Men poplation: %f\n", men);
	printf("Women population: %f\n", women);
	printf("Men literacy: %f\n", men_lit);
	printf("Women literacy: %f\n", women_lit);
	printf("Men Illiteracy: %f\n", men_ilit);
	printf("Women Illiteracy: %f\n", women_ilit);
}
