#include<iostream>


static void fun (static int a)
{
    a = 0;
    a++;
    printf("i = %d, &i = [%p]\n", a, &a);
}

int main (void) 
{
    for (int i = 0; i < 10; i++) {
        fun(i);
    }

    return 0;
} 
