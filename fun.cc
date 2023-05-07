#include "fun.h"

void showBits (int x) {
    int num = sizeof(x) * 8 - 1;
    while(num >= 0) {
        if(x & (1 << num)) {
            printf("1");
        }
        else{
            printf("0");
        }
        num--;
    }
    printf("\n");
}

void showArray( int *arr, int num) {
    printf("%lu\n", sizeof(arr));  
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
}

void a_showArray( char **arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%s\n", arr[i]);
	}

}
