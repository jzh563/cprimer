#include<stdio.h>
void aplaud(void);
void approve(void);
int main(void)
{
	aplaud();
	aplaud();
	aplaud();
	approve();
	getchar();
	return 0;
}
void aplaud(void)
{
	printf("For he's a jolly good fellow!\n");

}
void approve(void)
{
	printf("Which bobody can deny!\n");
	
}