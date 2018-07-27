/*two_func.c--在一个文件中使用两个函数*/
#include<stdio.h>
void butler(void);
int  main(void)
{
	printf("I will summon the butier function.\n");
	butler();
	printf("yes, bring me some tea and writeable CD-ROMS.\n");
	getchar();
	return 0;
	}
void butler(void) /*函数定义的开始*/
{
	printf("you rang,sir ?\n");
}
