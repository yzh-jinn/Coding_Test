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
//=====Testing two-dimensional pointers
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


//=====function pointer test
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

//=====单链表动态内存测试
Node_t * allocNode(int x) {
    Node_t *node = (Node_t *)malloc(sizeof (Node_t));
    if (node == NULL) {
        perror("malloc ! \n");
        exit(1);
    }
    node->data = x;
    node->next = NULL;

    return node; 
}

void insertNode( Node_t * head, int x) {
    assert(head);
    Node_t *node = allocNode(x);
    node->next = head->next;
    head->next = node; //头插

}

void showList( Node_t * head) {
    assert(head);
 
    Node_t *p = head->next; //或者head = head->next;

    while (p) {
        printf("%d -> ", p->data);
        p = p->next; //不能 p++
    }
    printf("NULL\n");
    sleep(1);
}

void deleteNode( Node_t * head) {
    //先定义一个指针来保存要删除的节点位置，然后再释放
    assert (head);
    Node_t *p = head->next;
    head->next = p->next;
    
    free(p);
    p = NULL;
}

//=====main 
/*	
    Node_t *head = allocNode(0);
	printf("插入测试:\n");
	for (int i = 0; i < NUM; i++) {
		insertNode(head, i); //头插
		showList(head);
	}
    
	printf("删除测试:\n");
	for (int i = 0; i < NUM; i++) {
		deleteNode(head); //头删
		showList(head);
	}
	free(head); 
*/

//=====线性表练习

Status initList(SqList *L) {
    L->elem = (ElemType *)malloc(sizeof(ElemType)*MAXSIZE);
    if(L->elem == NULL) {
        printf("%s",#OVERFLOW)
        exit(OVERFLOW); 
    }//可以用 assert(*p) 代替,或者自己写一个函数
    L->size = 0; //空表的有效元素为0
    L->capacity = MAXSIZE; //设置线性表的最大容量
    return OK;
}
    
void destroyList(SqList *L) {
    if (L != NULL) {
        if(L->elem != NULL){
            free(L->elem); //一定要注意 L->elem 也要置空
            L->elem = NULL;
        }
        L = NULL;
    }
}

void clearList(SqList *L) {
    if (L == NULL) { //查看结构体是否为空
        exit(OVERFLOW);
    }
    L->size = 0;
}
    
int listEmpty(SqList L) {
    if(L.size == 0) {
        return 1;
    }
    return 0;
}
    
int getLength(SqList L){
    return (L.size);
}
    
int listSize(SqList L) {
    if(L == NULL) {
        return #ERROR;
    }
    return (L.size);
}    
