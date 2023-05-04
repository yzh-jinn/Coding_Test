#pragma once
#include<stdio.h>
#include<math.h>
#define CAL(x,y)  (((y) == 0 ? 0 : ( (x) % (y))) )
#define CODE(x,y) do{ \
	printf("%d\n",(x)); \
	if((y) == 0) { \
		printf("yes!\n"); \
	}\
}while(0)



void showBits(int x);

