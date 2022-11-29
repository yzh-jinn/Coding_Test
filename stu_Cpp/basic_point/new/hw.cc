#include<iostream>
#include<stdio.h>
using namespace std;

//这里是地址,所以a[]可以是空的（因为不传长度）
void arr(int a[]){ 
    int i = 0;
    for (i = 0; i<5; i++) {
        printf("%d\n",a[i]);
    }
}

int main (void) {
    int a[] = {10,20,30,40,50};
    arr(a);
    printf("%lu\n",sizeof(a)/sizeof(int));
    return 0;
}


