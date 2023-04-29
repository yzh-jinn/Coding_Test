#include<stdio.h>
#include<unistd.h>
#include<string.h>
#define NUM 20
#include <stdio.h>

int main() {
    union {
        int i;
        char c;
    } u;

    u.i = 78;
	printf("%d\n", u.i);
	printf("%c\n", u.c);

    return 0;
}

