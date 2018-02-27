#include <stdio.h>

int main(void) {
	int a[10],i;
	for(i=1;i<=5;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++){
		printf("%d %d \n",a[i],i);
	}
	return 0;
}
