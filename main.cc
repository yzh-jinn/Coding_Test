#include "fun.h"

int main (void) {

    const char *str = "hello";
    char arr[] = "world";

    //1. 以指针的形式访问指针， 和以下标的形式访问指针
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        printf("%c \t", *(str+i));
        printf("%c \n", str[i]);
    }
    printf("\n");
    

    //2. 以指针的形式访问数组， 和以下标的形式访问数组
    len = strlen(arr);
    for (int i = 0; i < len; i++) {
         printf("%c \t", *(arr+i));  
         printf("%c \n", arr[i]);
    }
    printf("\n");
    
    //3. 
    char a[NUM] = {0}; //char *

    char (*p3)[NUM] = &a; // ok, char (*)[NUM] = char *[NUM]
    char (*p4)[NUM] = a; // no, char (*)[NUM]  = char * , 首元素

	return 0;

}
