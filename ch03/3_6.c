#include<stdio.h>
int main(void)
{
	float quarts;
	printf("please enter an amount of water inquarts:");
	scanf_s("%f", &quarts);
	printf("the number of water molecules in %f water is %e", quarts, quarts * 950 / 3 * 10e23);
	getchar();
	getchar();
	return 0;
}