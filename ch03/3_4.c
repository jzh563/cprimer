#include<stdio.h>
int main(void)
{
	float read;
	printf("enter a number:");
	scanf_s("%f", &read);
	printf("The input is %f or %e\n", read, read);
	getchar();
	getchar();
	return 0;
}
