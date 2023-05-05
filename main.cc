#include "fun.h"

int main (void) {

#if VERSION==0
	int result = CAL(-10, 3);
	printf("%d",result);
	CODE(3,0);

#elif VERSION==1
	printf("this is 1");

#elif VERSION!=(0||1)
	printf("this is other");

#endif
	return 0;

}
