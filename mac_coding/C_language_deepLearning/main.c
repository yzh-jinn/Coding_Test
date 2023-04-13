#include "t1.h"
//#include "t1.c"

int main (void) 
{

    int a = 20;
    int b = 40;
    function();

    b = g_val + a + g_val;
    printf("%d\n", b);
    
    //生成一个计算1-10以内整数的加法函数
    
    int g = add_one_to_ten();
    printf("%d\n",g );

    return 0;

}