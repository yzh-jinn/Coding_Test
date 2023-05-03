#include<stdio.h>
#define SETBIT(x, n) ((x) |= (1 << ((n) - 1)) )

void ShowBits (int x) {
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

int main () {
    printf("input a num: ");
    int x = 0;
    scanf("%d", &x);
    SETBIT(x, 5);
    ShowBits(x);
}
