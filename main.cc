#include "fun.h"

int main (void) {
	
	const char * a = "hello";
	for (int i = 0;; i++) {
		show(*(a+i));
	}

	return 0;

}
