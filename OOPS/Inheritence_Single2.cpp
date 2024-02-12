#include<iostream>
using namespace std;

// Representing Single Inheritence Using  Private Visibilty  Mode.

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

class C:public A {
    int c;
    public:
    C(){
        c = 8;
    }
    void getDetails(){
        cout<<"\nPrivate Variables of this class are: "<<c<<endl;
    }

};

int main(){
    C c;
    c.getDetails();
    cout<<"Accessing Publiuc variables of Base class directly "<<c.pv<<endl;
    c.getPrivateVals();
}