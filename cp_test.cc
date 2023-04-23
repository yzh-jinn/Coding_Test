#include<stdio.h>
#include<math.h>


int main (void) {
	
	printf("Input sth: \n");
	int m = 0;
//	int count = 0;
	int quit = 1;
	while(quit) {
		int ret = scanf("%d", &m);
		if(ret !=1 ) {
			printf("invalid!\n");
			int c;
            while((c = getchar()) != '\n' && c != EOF);
            continue;
		}
		switch(m){
			case 1:
				printf("day %d\n", m);
				break;
			case 2:
				printf("day %d\n", m);
				break;
			case 3:
				static int count = 0;
				count++;
				if(count >= 5){
					printf("are you kidding me!\n");
//					return 0;
					quit = 0;
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
