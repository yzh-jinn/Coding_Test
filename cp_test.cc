#include<iostream>
#include<float.h>
#include<math.h>


int main (void) {
	
	double x = 0.0;

	if (fabs(x) < DBL_EPSILON ) {
	    printf("this is true result!");
	}
	else {
		printf("oooops!");
	}

	return 0;
}

