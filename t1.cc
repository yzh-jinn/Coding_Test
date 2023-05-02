#include<stdio.h>

int show () {
	printf("worked!\n");
	return 1;
}


 int main (void) {
	int get_v = 0;
	
	while(1) {
		scanf("%d", &get_v);
		get_v && show();

	}
	
	return 0;
}
