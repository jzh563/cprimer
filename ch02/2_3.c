#include<stdio.h>
int main(void)
{
	int age_year,age_today;
	age_year = 24;
	age_today = 365 * age_year;
	printf("I am %d years old,it's about %d days.\n", age_year, age_today);
	getchar();
	return 0;

}