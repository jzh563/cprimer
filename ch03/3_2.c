#include<stdio.h>
int main(void)
{
	int code;
	printf("enter the ASCII code:");
	scanf_s("%d", &code);
	printf("the code %d represents %c\n", code, code);
	getchar();
	getchar();
	return 0;
}