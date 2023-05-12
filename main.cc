#include "fun.h"
//#include<stdio.h>


void getStr(char **pp) {
    *pp = (char *)malloc(sizeof(char) * NUM);
    if(NULL != *pp) {
        strcpy(*pp, "hello");
    }
    else{
        //...
    }
	printf("%p\n", &pp);
}

int main (void) {
    char *p = NULL;
    getStr(&p);
    printf("%s\n",p);
    free(p);

	void (*p_getStr)(char **) = &getStr;
	printf("%p\n", getStr);
	printf("%p\n", p_getStr);

    return 0; 
}

