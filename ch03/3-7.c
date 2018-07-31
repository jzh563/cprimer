#include<stdio.h>
int main(void)
{
	float height;
	printf("enter your height in cm:");
	scanf_s("%f", &height);
	printf("your height is %fcm,or %f inches.\n", height, height * 2, 54);
	getchar(); getchar();
	return 0;
}