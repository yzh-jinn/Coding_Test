#include "fun.h"
//#include<stdio.h>
//#include<stdlib.h>
#include <mysql/mysql.h>

int main (void) {
	cout << "hello: " << mysql_get_client_info() << endl;

    return 0;

}
