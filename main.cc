#include "fun.h"
//#include<stdio.h>
 
int main (void) {
 
	int a[5][5];
	int (*p)[4];
	
	p = a;
	printf("a_ptr = %p, p_ptr = %p\n", &a[4][2], &p[4][2]);
	printf("%p, %d\n", &p[4][2] - &a[4][4], &p[4][2] - &a[4][2]);

	return 0;

}
