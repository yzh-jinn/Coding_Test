//#include "fun.h"
#include<stdio.h>


int main (void) {
	int a[4] = {1,2,3,4};
	int *ptr = (int *)((int)a + 1);
	printf("a %%p: %p\n",a); 
	printf("(int)a %%p: %p\n",(int)a);
	printf("(int)a %%d: %d\n",(int)a);
	printf("%d\n",*ptr);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x, %x\n", ptr1[-1], *ptr2);
	return 0;

}
