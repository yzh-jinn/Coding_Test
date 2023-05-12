//#include "fun.h"
#include<stdio.h>
 
int main (void) {
 

	int a = 10;
	int *p = &a;
	int **pp = &p; 

	p = 100;

	return 0; 

}
