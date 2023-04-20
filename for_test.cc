#include<iostream>

void func(unsigned int a, int b) {

	printf("you inputed : %u , %u", a, b);

}

int main (void) {

    unsigned int a = -10;
	int b = 20;
	int c = 1008;
	int d = 100;
	
	func(a, c);


    return 0 ;
}
