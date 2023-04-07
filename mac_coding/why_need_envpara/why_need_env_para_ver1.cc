#include<iostream>
#include<stdlib.h>
#include<cstring>

int main () {
    
    char *id = getenv("USER");
    if(strcasecmp(id,"vzjinn") != 0) {
        printf("权限拒绝！\n");
        return 0;
    }
    printf("成功执行\n");

    return 0;
}
