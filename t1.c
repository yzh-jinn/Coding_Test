#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

typedef struct test{
    int *a;
    char *b;
}test;

void initTest(test *t){
    t->a = (int*)malloc(SIZE*sizeof(int));
    t->b = (char*)malloc(SIZE*sizeof(char));
    //return *t;
}

int main (void) {
    test *t1 = (test*)calloc(SIZE, sizeof(test));
    initTest(t1);

    return 0;
}
