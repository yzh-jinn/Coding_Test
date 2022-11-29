#include<iostream>
#include<string>

using namespace std;

class A {
public:
    A(){}
    A(int age, char* name):
       _age(age),
        _name(name)
    {
        cout << "Constructing" << endl;
    }

    void show() {
        cout << _age << endl;
        cout << _name << endl;
    }

    void changeWord(){
 
        cout << "Input your Word : " << endl;
        //char *new_word = nullptr;
        //cin >> new_word;

        strcpy_s(_name, "Good");
        
        cout << "This is your new Word : " << _name << endl;

        //return *this;
     }

private:
    int _age = 10;
    char* _name = nullptr; //(char*)malloc(sizeof(char)); 
};


int main (void) {
    A a(11, "Happy Good Day!");
    a.show();
    cout << "-------" << endl;
    a.changeWord();
    a.show();

    return 0;
}
