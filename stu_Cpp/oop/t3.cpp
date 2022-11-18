#include<iostream>
using namespace std;


class A{
public:
    A(const char *name, int age):
        _name(name = "Bob"),
        _age(age = 10)
    {
        cout << "Constructor A is activating" << endl;
    }        
protected:
    const char *_name;
    int _age;
};

class B: public A{
public:
    B(const char *name, int age, int score):
        A(name, age),
        _score(score)
    {
        cout << "Constructor B is activating" << endl;
    }

protected:
    int _score;
};

int main (void) {
    B b("Tom", 18, 120);
    

    return 0;
}
