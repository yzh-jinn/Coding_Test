#include<stdio.h>
#include<unistd.h>


const int * getVal() {
	static int a = 10;
	return &a;

}


int main (void) {
	cosnt int *p = getVal();




	return 0;

} 
