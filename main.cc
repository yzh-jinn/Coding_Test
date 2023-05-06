#include "fun.h"

int main (void) {
	
	int arr[] = { 1, 2, 3, 4, 5};
	int num = sizeof(arr) / sizeof(arr[0]);
	
	showArray(arr, num);


	return 0;

}
