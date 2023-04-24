#include<stdio.h>




int main (void) {
	
	printf("Input sth: \n");
//	int m = 0;
	char s = NULL;
//	int count = 0;
	int quit = 0;
	while(!quit) {
		int ret = scanf("%c", &s);
		if(ret !=1 ) {
			printf("invalid!\n");
			int c;
            while((c = getchar()) != '\n' && c != EOF);
            continue;
		}
		switch(s){
			case 'A':
				printf("day %c\n", s);
				break;
			case 'B':
				printf("day %c\n", s);
				break;
			case 'C':
				static int count = 0;
				count++;
				if(count >= 5){
					printf("are you kidding me!\n");
//					return 0;
					quit = 1;
				}
				printf("input again\n");
				break;
			default:
				printf("you wrong!\n");
				break;
		}
	}
	printf("run it again!\n");
	
	return 0;

}
