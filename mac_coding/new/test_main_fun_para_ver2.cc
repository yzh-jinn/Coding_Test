#include<iostream>
#include<cstring>
#include<unistd.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {
    if( argc != 4 ) {
        printf( "Usage: %s [-a | -s | -m | -d] first_data second_data\n ", argv[0] );
        return 0;
    }
    int x = atoi (argv[2]);
    int y = atoi (argv[3]);
    
    if(strcmp("-a",argv[1])==0 ){
        printf("%d + %d = %d\n", x, y, x + y);
    }

    else if(strcmp("-s",argv[1])==0 ){
        printf("%d - %d = %d\n", x, y, x - y);
    }

    else if(strcmp("-m",argv[1])==0 ){   
        printf("%d * %d = %d\n", x, y, x * y);
    }
    
    else if(strcmp("-d",argv[1])==0 && y!=0){
        printf("%d / %d = %d\n", x, y, x / y);
    }

    else {   
        printf( "Usage: %s [-a | -s | -m | -d] first_data second_data\n ", argv[0] );
        return 0;
    }


    return 0;
}
