#include<stdio.h>
#include<string.h>
#define PRAISE "what a super marvelous name !"
int main(void)
{
	chae name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello,%s,%s\n", name, PRAISE);
	printf("Your name of %d  lettersoccupies %d memory cells ");
