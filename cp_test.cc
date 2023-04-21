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

	unsigned int a = -20u;
	for (a = 9; a >= 0; a--){
		printf("%d\n", a);
	}

}

int main (void) {
	func();
	return 0;
}
