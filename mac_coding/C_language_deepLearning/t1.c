#include "t1.h"
//#include<stdio.h>
//#include<stdlib.h>


int g_val = 100;

void function(void) 
{
    printf("hello\n");
} 

int add_one_to_ten(void) {
    int sum = 0;
       for (int i = 1; i <= 10; i++) {
            sum += i;
        }
    return sum;
}
//计算10以内整数加法的和的函数
int add_one_to_ten2(void) {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    return sum;
}

