#include<iostream>
using namespace std;

int main (void) {
    char* p  = (char*)malloc(3*sizeof(char));

    cin >> p ;

    cout << p << endl;

    return 0;
}
