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

class B : private A{
    int x = 23;
    int y = 25;
    public:
    int z;
    B(){
         z = 19; 
    }
    void getDetails(){
            cout<<"Private Variables of This Class: "<<x<<" - "<<y<<endl;
    }

    void accessBc(){ // If privately accessing . the members of the base class can only be accessed through member function.
        getPrivateVals();
    }
};



int main(){
    B b;
    b.getDetails();
    b.accessBc();

}