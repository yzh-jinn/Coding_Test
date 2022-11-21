#include<iostream>
using namespace std;

void test(const int* arr, int n) {
    
    cout << "int array[3] is : " << arr[5] << endl;

}


int main (void) {
    
    int array[] = {1,2,3,4,5};

    test(array, 3);

    return 0;
}
