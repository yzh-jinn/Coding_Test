#include<iostream>
using namespace std;

class String {

public:
    String(const char* str = ""):
        _size(strlen(str)),
        _capacity(_size),
        _str(new char[_capacity + 1]) //养成习惯：String 开空间的时候多+1
    {
       //_str = new char[_capacity + 1]; 
       //这里也行,
       strcpy(_str, str);
    }

    /*拷贝构造函数
    传统写法
    1.有效个数与大小就是长度，用 strlen 计算
    2.开一个空间（\0 所以要+1）
    3.将字符串拷贝到该空间
    4.把空间赋值给_str
    5.size 与capacity 同步*/

    String(const String& s):
        _size(strlen(s._str)),
        _capacity(_size)
    {
        char* tmp = new char[ _capacity + 1 ];
        strcpy(tmp, s._str);
        _str = tmp;
        _size = s._size;
        _capacity = s._capacity;
    }


    /*现代写法
    利用 tmp 构造，再让他们交换
    1.因为 tmp 交换是交换一个不存在的，所以要先初始化才能进行交换。
    2.利用 tmp 构造，如果单单传s 是传对象，会被认为调用拷贝构造，造成死循环
    3.让_str 与 tmp 交换*/

/*   
    string(const String& s):
        _str(nullptr),
        _size(0),
        _capacity(0)
    {
        string tmp(s._str);//这里传的是 s 的字符串，调用的是构造函数
        swap(tmp);
    }

*/

private: //养成习惯：初始化在这里完成
    char* _str = nullptr;
    int _capacity;
    int _size;
    char npos;
};




int main (void) {

    return 0;
}
