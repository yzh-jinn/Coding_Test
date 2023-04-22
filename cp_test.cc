#include<stdio.h>
#include<float.h>
#include<math.h>

typedef struct stu{
	int age;
	const char *name;
}stu;

int main (void) {
	stu a = {12, "Bob"};
	stu b = {25, "Merry"};
	
	printf("Input sth: \n");
	int m = 0;
//	int count = 0;
	while(1) {
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
			default:
				static int count = 0;
				count++;
				if(count >= 5){
					printf("are you kidding me!\n");
					return 0;
				}
				printf("failed!\n");
		}

	}
	
	return 0;

}

