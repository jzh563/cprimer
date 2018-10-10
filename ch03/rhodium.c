#include<stdio.h>
int main(void) {
	float weight;
	float value;
	scanf("%f", &weight);
	value = 770 * weight;
		printf("your weight is $%.2f.\n",value);
		getchar();
		getchar();
		return 0;
}