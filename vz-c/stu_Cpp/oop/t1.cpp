#include<iostream>
using namespace std;

class Person
{
public:
    Person();
    Person(int id):
        _id(id)
    {}
    
    void getID(){
        cout << "ID number is :" << _id << endl;
    }

protected:
    int _id;
};

class Student : public Person
{
public:
    Student();
    Student(int id, const char *name):
        Person(id),
        _name("Bob")
    {}

    void getName(){
        cout << "Name is : " << _name << endl;
    }

private:
    const char* _name;
};


int main(void) {
    Student s;
    Student s1(10090,"Tim");
    s.getID();
    s.getName();
    s1.getID();
    s1.getName();
    //cout << s._name << endl;
    //cout << s._id << endl;

    return 0;
}
