#include<iostream>
using namespace std;

// Nested Member Functions.

class addition{
    int p,q,r,s;
    public:
    void input(){
        cout<<"Enter The Three Values: \n";
        cin>>p>>q>>r;
    }
    void show(){
        cout<<"The Addition of three numbers is "<<add()<<endl;
    }

    int add(){
        s = p+q+r;
        return s;
    }
};

int main(){
    addition a;
    a.input();
    a.show();
}