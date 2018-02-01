#include <stdio.h>
int main(void) {
	int hr1,hr2,min1,min2,time,hr3,min3,mins,t1,t2;
	scanf("%d %d",&hr1,&min1);
	scanf("%d %d",&hr2,&min2);
	t1=(hr1*60)+min1;
            t2=(hr2*60)+min2;
            mins=t1-t2;
            hr3=mins/60;
            min3=mins%60;
	printf("%d %d",hr3,min3);
	return 0;
}
