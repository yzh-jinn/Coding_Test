//#include "fun.h"
#include<stdio.h>

#define VERSION 0

int main (void) {

#if VERSION==0
//	int result = CAL(-10, 3);
	printf("this is 0\n");
//	CODE(3,0);

#elif VERSION==1
	printf("this is 1\n");

#endif
	return 0;

}
