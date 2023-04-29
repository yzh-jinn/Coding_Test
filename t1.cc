#include<stdio.h>

enum COLOR {
    RED, //默认编号：0
    YELLOW, //编号：1
    BLACK = 202,//编号：202
    GREEN,//编号：203
    BLUE = -10,//编号：-10
    PINK, //编号：-9
};

int main() {
	printf("%d\n", GREEN);
	return 0;
}

