#include <stdio.h>
#define PRAISE "what a super marvelous name!"
int main(void)
{
	char name[40];
	printf("what's your name?\n");
	scanf_s("%s", name, 40);
	printf("hello,%s,%s\n", name, PRAISE);
	getchar();
	getchar();
	getchar();
	return 0;
}