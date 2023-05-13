#include "fun.h"

void showBits (int x) {
    int num = sizeof(x) * 8 - 1;
    while(num >= 0) {
        if(x & (1 << num)) {
            printf("1");
        }
        else{
            printf("0");
        }
        num--;
    }
    printf("\n");
}

void showArray( int *arr, int num) {
    printf("%lu\n", sizeof(arr));  
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
}

void a_showArray( char **arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%s\n", arr[i]);
	}

}
//====Testing two-dimensional pointers
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


//====function pointer test
void welcome(){
    printf("##### welcome ####\n");
    printf("#1.Play    2.Exit#\n");
    printf("##### welcome ####\n");
}

void getGift() {
    printf("Congratulation ! \n");
}

void login( void (*welcome)(), void (*getGift)() ) {
    #define NAME "xiaoxuesheng"
    #define PASSWD "12345"
    
    char name[32];
    char passwd[32];
    printf("Enter your name :");
    scanf("%s",name);
    printf("Enter your password: ");
    scanf("%s", passwd);
    
    if (strcmp (name, NAME) == 0 && strcmp(passwd, PASSWD) == 0 ) {
        welcome();
        getGift();
    }
}
