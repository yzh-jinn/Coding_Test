//#include "fun.h"
#include<stdio.h>

int main (void) {
	int a[4] = {1,2,3,4};
//	int *ptr = (int *)((int)a + 1);
	printf("%p\n",(int)a);
	printf("%d\n",(int)a);
	printf("%p\n",(int)a+1);
	printf("%d\n",(int)a+1);
	
	return 0;

}
