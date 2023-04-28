#include<stdio.h>
#include<unistd.h>


const int * getVal() {
	static int a = 10;
	return &a;

}


void fun( const int num,  const int *num_2) {
    printf("this is a number a : %d" ,num);
    printf("this is a number b : %d" ,num);

    //int *op = num_2 + 1 ;
}

int main (void) {
    int a = 10;
    const int *p = &a;

    fun(a, p);

    return 0;
}
