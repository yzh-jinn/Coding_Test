#include<iostream>
using namespace std;

class A{
public:
    A(){}
    A(const char* name):
        _name(name)
    {}

    void show() const {
        cout << "Name is : " << _name << endl;
    }

protected:
    const char* _name = "Mike";
};

int main (void) {

    // A* a = new A[3]{"James","Bob","Marry"};
    A (*a)[3] = new A[4][3]{"James","Bob","Marry","A1","A2","A3"};

    (*a)[6].show();


    return 0;
}
