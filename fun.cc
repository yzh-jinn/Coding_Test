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

