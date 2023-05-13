#include "fun.h"
//#include<stdio.h>

int main (void) {
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

    return 0; 
}

