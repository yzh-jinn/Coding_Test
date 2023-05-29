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
        printf("%d",my_OVERFLOW);
        exit(my_OVERFLOW); 
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
        exit(my_OVERFLOW);
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
    if(L.elem == NULL) {
        return ERROR;
    }
    return (L.size);
}    


//=====栈函数练习
struct myStack* createStack(){
    struct myStack* stack = (struct myStack*)malloc(sizeof(struct myStack));
    //结构体变量的初始化
    stack->stackMemory = (int *)malloc(sizeof(int)*MAXSTACK);
    stack->stackTop = -1;
    return stack;
}

void push(struct myStack* stack, int data){
    //pre: 进栈要考虑满  1.栈顶标记往上走  2.将元素放到栈顶标记为下标的数组中
    
    if(stack->stackTop == MAXSTACK) { // 做一个防御性编程
        printf("栈满，无法入栈\n");
        return ;
    }
    
    stack->stackTop++; //因为栈顶标记初始是-1
    stack->stackMemory[stack->stackTop] = data; 
}

int empty(struct myStack * stack) {
    return stack->stackTop == -1; //返回 1 表示NULL 返回0 表示非 NULL
}

void pop(struct myStack* stack, int *data) {
    if(stack->stackTop == -1) {
        printf("栈空\n");
        return;
    }
    *data = stack->stackMemory[stack->stackTop--];
}

/* 栈实际用法练习：2个例子
int main (void) {

    //=====短除法
    struct myStack* stack = createStack();
    int data = 0;
    while(!empty(stack)){
        pop(stack, &data);
        printf("%d", data);
    }
    printf("\n");
    int num = 11111;
    printf("num %d的二进制是: \n", num);
    struct myStack* binaryStack = createStack();
    
    while(num != 0) {
        push(binaryStack, num % 2);
        num /= 2; //除数自动取整
    }    
    
    int data_2 = 0;
    
    while(!empty(binaryStack)) {
        pop(binaryStack, &data);
        printf("%d", data);
    }
    printf("\n\n");

    //=====实际操作：简单化，会直接使用数组而不是写函数: 短除法举例2
    int stackArray[50];
    int stackTop = -1; //创建栈
    
    int num_2 = 11111;
    printf("num_2 %d的二进制是: \n", num_2);
    while(num_2 != 0){
        stackArray[++stackTop] = num_2 % 2;
        num_2 /= 2;
    }
    while(stackTop != -1) {
        printf("%d", stackArray[stackTop--]);
    }
    
    //总结: 上面的函数是一种思路，实际使用的时候只会用数组做栈+队列
    
    printf("\n");

    return 0;
}
*/
