#include<iostream>
using namespace std;

// Representing Multi Level Inheritence Using  Private Visibilty  Mode.

class A{
    int a;
    int b;
    public:
    A(){
        a = 5;
        b = 6;
    }
    int pv = 29;
    void getPrivateVals(){
        cout<<"Private Variables of Base Class: "<<a<<" - "<<b<<endl;
    }
};