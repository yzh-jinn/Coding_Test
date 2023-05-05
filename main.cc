#include "fun.h"

int x = 20;

int main (void) {
	int * p = NULL;
	printf("1. &p = %p\n", (void*)&p);
	p = (int*)&p; //将 p 的地址放入 p 变量（自己指自己）
	printf("2. p = (int *)&p = ? %p\n", p);
	*p = 10; //将 p 地址指向的空间内容改为10
	//p = 20;
	printf("3. *p = 10, &p = ? %p\n", p);
//	printf("4. *p = 10, *p = ? %d",*p);



	return 0;

}
