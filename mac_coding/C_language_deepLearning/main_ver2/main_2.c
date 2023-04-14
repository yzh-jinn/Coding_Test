#include <stdio.h>

int main(void)
{

    char *b = "hello";

    for (int i = 0; i < 10; i++)
    {
        printf("count i = %d %s\n", i, b);
    }

    return 0;
}