#pragma once
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<typeinfo>
#include<cstring>
#include<stdlib.h>
#include<assert.h>
#include<unistd.h>
#define CAL(x,y)  (((y) == 0 ? 0 : ( (x) % (y))) )
#define CODE(x,y) do{ \
	printf("%d\n",(x)); \
	if((y) == 0) { \
		printf("yes!\n"); \
	}\
}while(0)

#define VERSION 0
#define show(x) (std::cout << (x) << std::endl)
#define NUM 10
#define MAXSTACK 100


//=======Function
void showBits(int x);
void showArray(int arr[], int num);
void a_showArray(char **arr, int num);

void getStr(char **pp);

void welcome();
void getGift();
void login( void (*welcome)(), void (*getGift)() );

//=====单链表动态内存测试
typedef struct Node {
	int data;
	struct Node * next;
}Node_t;

Node_t * allocNode(int x);
void insertNode( Node_t * head, int x);
void showList( Node_t * head);
void deleteNode( Node_t * head);


//=====顺序表测试
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define my_OVERFLOW -2
#define MAXSIZE 100

typedef int Status;
typedef char ElemType;

typedef struct SqList{
    ElemType *elem; //动态数组，使用函数单独开辟 空间 malloc(sizeof(SqList))
    size_t size; // 有效数据个数
    size_t capacity; //容量上限
}SqList;

//=====栈 Stack
struct myStack{
    int *stackMemory;    //以栈中存储的数据是整数为例
    int stackTop;        //栈顶标记
};
struct myStack* createStack();
void push(struct myStack* stack, int data);
int empty(struct myStack * stack);
void pop(struct myStack* stack, int *data);