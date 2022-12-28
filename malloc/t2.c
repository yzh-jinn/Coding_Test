#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
//using namespace std;

void getMem(char* p) {
//    printf("char* p = %s\n",p);
    p = (char*)malloc(SIZE*sizeof(char));
}

/*void test(void) {
    char* str = NULL;
    getMem(str);
    strcpy(str,"hello world");
    printf(str);
}*/

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main (void) {
    //test();
    int a = 12;
    int b = 13;
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}
