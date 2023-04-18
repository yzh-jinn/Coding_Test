#include<iostream>

static void fun ()
{
    static int i = 0;
    i++;
    printf("i = %d, &i = [%p]\n", i, &i);
}

int main (void) 
{
    for (int i = 0; i < 10; i++) {
        fun();
    }

    return 0;
} 
