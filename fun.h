#pragma once
#include<stdio.h>
#include<math.h>
#include<iostream>
#define CAL(x,y)  (((y) == 0 ? 0 : ( (x) % (y))) )
#define CODE(x,y) do{ \
	printf("%d\n",(x)); \
	if((y) == 0) { \
		printf("yes!\n"); \
	}\
}while(0)
#define VERSION 0
#define show(x) (std::cout << (x) << std::endl)

void showBits(int x);
