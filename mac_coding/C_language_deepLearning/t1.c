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