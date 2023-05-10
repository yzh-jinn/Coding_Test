#include "fun.h"
//#include<stdio.h>
 
int main (void) {
 
	char c[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{-1,-2,-3,-4}
	};

//	char (*p)[4] = c;
	printf("%c\n",*c);
	

	return 0;

}
