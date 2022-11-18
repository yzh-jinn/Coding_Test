#include<iostream>
using namespace std;

class A{
public:
    
    A(const char *name, int age):
        _name(name),
        _age(age)
    {
       cout << "Cons was called by A" << endl; 
    }

    void showFunc(){
        cout << _name << endl;
        cout << _age << endl;
    }

protected:
    const char *_name = "Bob";
    int _age = 0;
};

class B : public A{
public:
    B(const char *name, int age, int id):
        A(name , age),
            _id(10099)
    {
        cout << "Cons was called by B" << endl;
    }

protected:
    int _id = 10086;
};


int main(void) {
    
    A a("Tom", 15);
    a.showFunc();



    return 0;
}
