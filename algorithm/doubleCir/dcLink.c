#include<stdio.h>
#include<stdlib.h>
#define SUM 10
//将 int 类型的数据转换成链表节点
typedef int listDataType;

typedef struct List{
    listDataType data;
    struct List *next;
    struct List *prev;
}dcList, *dcList_p ;//可以当做是指针直接用

dcList *initDoubleList(void){
      //1.申请一块内存
      dcList *head = (dcList *)malloc(sizeof(dcList));
      if(head == NULL) {
          perror("malloc failed!");
          return NULL;
      }
      //2.初始化指针域->自己指向自己
      //注意头结点数据域没有存储任何数据
      head->next = head;
      head->prev = head;
      return head;
}

dcList *buyNewNode(listDataType a) {
    //申请一块内存
    dcList *newNode = (dcList *)malloc(SUM * sizeof(listDataType));
    if(newNode == NULL) {
        perror("allocation Failed!");
        return NULL;
    }
    newNode->next = newNode;
    newNode->prev = newNode;
    newNode->data = a;
}

int main (void) {
    dcList *head = initDoubleList();
    listDataType num = 0;
    while(1) {
        scanf("%d",&num);
        if(num>0){
            //插入链表
            
        }else if(num<0){
            //删除链表中对应的数字       
        

        }else{
            //退出链表
        

        }
    }
    return 0;
}
