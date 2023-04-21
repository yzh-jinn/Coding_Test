#include<iostream>

// void func(unsigned int a, int b) {

// 	printf("you inputed : %u , %u", a, b);

// }

// int main (void) {˜

//     unsigned int a = -10;
// 	int b = 20;
	
// 	func(a, b);
	

//     return 0 ;
// }

void func () {

	unsigned int b = -20u;
	for (b = 9; b >= 0; b--){
		printf("%d\n", b);
	}

}

int main (void) {
	func();
	const char *str = "hello";

	return 0;
}
