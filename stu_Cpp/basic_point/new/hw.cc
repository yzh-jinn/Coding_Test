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

    void changeWords(char* changeWords){
 
        cout << "Input your Word : " << endl;
        //char *new_word = nullptr;
        cin >> changeWords;

        strcpy(_name, changeWords);
        
        cout << "This is your new Word : " << _name << endl;

        //return *this;
     }

private:
    char* _name = nullptr; //(char*)malloc(sizeof(char))
    int _age = 10;
};


int main (void) {
    A a(11, "Happy Good Day!");
    a.show();
    cout << "-------" << endl;
    char* changeWords = "GoodBoy";
    a.changeWords(changeWords);
    a.show();

    return 0;
}
