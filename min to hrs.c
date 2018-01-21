#include<stdio.h>
int main()
{
	int min1,hrs,mins;
	printf("enter the minutes");
	scanf("%d",&min1);
	hrs=min1/60;
	mins=min1%60;
	printf(" time is %d hrs and %d mins",hrs,mins);
	return 0;
}
