#include<iostream>
#define log(x) std::cout << x << std::endl

int main ( int argc, char *argv[] ) {
    const char *a = "hello";
    log(a);

    for(int i=0; i<argc; i++) {
        printf("\nargv[%d]: %s\n ", i, argv[i]);
    }

    return 0;
}
