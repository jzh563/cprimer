#include<stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void) {
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;
	printf("This prigram converts your time for a metric race\n");
	printf("please enter,in kilometers,the diatance run.\n");
	scanf("%1f", &distk);
	printf("next enter the time in minutes and seconds.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);
	time = S_PER_M * min + sec;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime%S_PER_M;
	printf("YOUR ran %1.2f km(%1.2fmiles) in %d min,%d sec.\n", distk, distm, min, sec);
	printf("%d sec,\n Your average speed was %1.2f mph.\n", msec, rate);
	getchar();
	getchar();
	getchar();
	return 0;
}