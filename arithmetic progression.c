#include <stdio.h>

int main(void) {
	int a,n,d,ap;
	scanf("%d%d%d",&a,&n,&d);
	ap=(n*0.5)*(2*a+(n-1)*d);
	printf("%d",ap);
	return 0;
}
