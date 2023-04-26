#include<stdio.h>
#include<unistd.h>

int main (void) {

	while(1) {
		printf("input sth: ");
		int a = getchar();
		if(a == '#') {
			break;
//			continue;
		}
		putchar(a);
		printf("\n");
	}
	printf("\nbreak out!\n");
	
	return 0;

}