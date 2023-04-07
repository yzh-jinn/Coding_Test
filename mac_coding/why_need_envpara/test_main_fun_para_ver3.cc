#include<iostream>
#include<cstring>
#include<unistd.h>
#include<stdlib.h>

//无参数获取环境变量-调用方法2
//int main ()
int main (int argc, char *argv[], char *env[]) {
    //获取环境变量的方案1
    for(int i = 0; env[i]; i++) {
        printf("env[%d]: %s\n", i, env[i]);
    }

    //获取环境变量的方案2
    extern char **environ;
    for (int i = 0; environ[i]; i++) {
        printf("env[%d]: %s\n", i, environ[i]);
    }

    //获取环境变量的方案3
    //需要调用 <stdlib.h>
    char *val = getenv("PATH");
    printf("%s\n", val);

    return 0;
}
