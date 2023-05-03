#include "fun.h"
#include<math.h>

int main (void) {
	int a = 10;
	int b = a++;
	printf("a: %d\nb: %d\n",a,b);
	
	int c = 0xDD;
	printf("before c: %d\n",c);
	c++;
	printf("c: %d\n",c);

	return 0;
}
