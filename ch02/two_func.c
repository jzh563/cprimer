/*two_func.c--��һ���ļ���ʹ����������*/
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
void butler(void) /*��������Ŀ�ʼ*/
{
	printf("you rang,sir ?\n");
}
