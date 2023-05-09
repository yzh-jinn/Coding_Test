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
    

	return 0;

}
