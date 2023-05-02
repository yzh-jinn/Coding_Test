#include<stdio.h>

int show () {
	printf("worked!\n");
	return 1;
}


 int main (void) {
	int get_v = 0;
	
	while(1) {
		printf("Input num: ");
		scanf("%d", &get_v);
		get_v || show();
//		printf("didn't worked\n");
	}
	
	return 0;
}
