#include<iostream>
using namespace std;

//class Sample{
//public:
//    Sample(){  //构造函数 1
//        cout<<"Constructor 1 Called"<<endl;
//    }
//    
//    Sample(int n){  //构造函数 2
//        cout<<"Constructor 2 Called"<<endl;
//    }
//
//};

class CTest{
public:
    //构造函数(1)
    CTest(int n){
        cout << "Con1" << endl;
    }      

    //构造函数(2)
    CTest(int n, int m){
        cout << "Con2" << endl;
    }     

    //构造函数(3)
    CTest(){
        cout << "Con3" << endl;
    } 
};


int main (void) {


    cout << "CTest arrayl [3] = { 1, CTest(1,2) };" << endl;
    //三个元素分别用构造函数(1)、(2)、(3) 初始化
    CTest array_1 [3] = { 1, CTest(1,2) };

    cout << "CTest array2[3] = { CTest(2,3), CTest(1,2), 1};" << endl;
    //三个元素分别用构造函数(2)、(2)、(1)初始化
    CTest array_2[3] = { CTest(2,3), CTest(1,2), 1};  
    
    cout << "CTest* pArray[3] = { new CTest(4), new CTest(1,2) };" << endl;
    //两个元素指向的对象分别用构造函数(1)、(2)初始化
    CTest* pArray_[3] = { new CTest(4), new CTest(1,2) };  

    

    return 0;
}
