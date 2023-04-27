#include<stdio.h>
#include<unistd.h>

int main (void) {

	char *p = "hello\n";
	*p = 'h';

	return 0;

} 