#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
	printf("Biggest int :%d\n", INT_MAX);
		printf("Smallest unsigned long:%11d\n", LLONG_MIN);
		printf("One byte=%d bits on this system.\n", CHAR_BIT);
		printf("Largest double :%e\n", DBL_MAX);
		printf("float precision=%d digits\n", FLT_DIG);
		getchar();
		return 0;

}