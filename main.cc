#include "fun.h"

int main (void) {

	int a[10] = {0};
	int b[10] = {0};
	int c[] = {0};
	int d[4] = {0};
	int a2 = 10;
	int (*p)[10] = &a;

	printf("a 首元素 a 的地址：%p，类型修饰符：%s\n", a, typeid(a).name());
	printf("&a 数组 a 的地址：%p，类型修饰符：%s\n", &a, typeid(&a).name());
	printf("a2 的地址：%p，类型修饰符：%s\n", &a2, typeid(a2).name());



	return 0;

}
