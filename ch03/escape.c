#include <stdio.h>
int main(void)
{
	float salary;
	printf("\a enter your desired monthly salary:");
	printf("$_______\b\b\b\b\b\b\b");
	scanf_s("%f", &salary);
	printf("\n\t$%.2f a minth is $%.2f a year.", salary,salary*12.0);
	printf("\rGee!\n");
	getchar();
	getchar();
	return 0;

}