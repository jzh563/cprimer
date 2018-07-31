#include<stdio.h >
int main(void) 
{
	int age;
	printf("enter your age:");
	scanf_s("%d",&age);
	printf("your age is %d ,it's %es", age, age*3.156*10e7);
	getchar();
	getchar();
	return 0;

}