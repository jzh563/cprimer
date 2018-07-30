#include <stdio.h>
int main(void)
{
	printf("type int has a size of %u byte.\n", sizeof(int));
	printf("type char has a size of %u bytes.\n", sizeof(char));
	printf("type long has a size of %u bytes.\n", sizeof(long));
	printf("type double has a size of %u bytes.\n", sizeof(double));
	getchar();
	return 0;

}