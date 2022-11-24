#include<iostream>
using namespace std;

class A{
public:
    //Constructor
    A(){}
    A(int a, int b):
        _a(a),
        _b(b)
    {}

//    //copy initialization, 就是构造函数的重载
//    a(const A& a) {
//        cout << "Copy initialization is running" << endl;
//        _a = a._a;
//        _b = a._b;
//    }
//
//    //重载赋值运算符函数
//    a& operator = (const A& a) {
//        cout << "重载赋值运算符函数" << endl;
//        _a = a._a;
//        _b = a._b;
//        return *this;
//    }
//    
    void show(){
        cout << "_a = " << _a << endl;
        cout << "_b = " << _b << endl;
    }

    int _a = 1;
    int _b = 11;

    
};

int main (void) {
    cout << "a1, a2 has constructed" << endl;
    A a1(1,11),a2(2,22);
    cout << "a1.show is " << endl;
        a1.show();
        cout << endl;

    cout << "a2.show is " << endl;
        a2.show();

        cout << endl;

    cout << "---------" << endl;

    cout << "running \"A a3 = a2\" " << endl;
     A a3 = a2;

    cout << "expect a3 is same to a2" << endl;
    cout << "a3.show is " << endl;
        a3.show();

        cout << endl;

    cout << "a2.show is " << endl;
        a2.show();

        cout << endl;

    cout << "a1.show is " << endl;
        a1.show();
        cout << endl;

    cout << "========" << endl;

    cout << "running \"a3 = a2\"  " << endl;
        a3 = a2;
        cout << endl;

    cout << "a3.show is " << endl;
        a3.show();

        cout << endl;

    cout << "a2.show is " << endl;
        a2.show();

    return 0;
}
