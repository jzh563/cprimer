/*shoes1.c -- 把一双鞋的尺码转化为英寸*/
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
	double shoe, foot;
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("shoe size(men's)foot length \n");
	printf("%10.1f %15.2f inhes\n", shoe, foot);
	
	getchar();
	getchar();
return 0;

}