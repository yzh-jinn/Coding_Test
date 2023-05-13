#pragma once
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<typeinfo>
#include<cstring>
#include<stdlib.h>
#include<assert.h>
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

