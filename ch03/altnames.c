#include<stdio.h>
#include<inttypes.h>
int main(void)
{
	int16_t mel6;
	mel6 = 4593;
	printf("assume int_16_t is a short:");
	printf("mel6 = %hd \n",mel6);
	printf("next\n");
	printf("instead,use a \"macro\" from inttpes.h:");
	printf("mel6=%" PRId16"\n", mel6);
	getchar();
	return 0;

}