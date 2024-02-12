#include<iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    void setData(int d){
        x = d;
    }
    void display(){
        cout<<x<<endl;
    }
    friend void add(A &,B);
};

class B{
    int x;
    public:
    void setData(int d){
        x =d;
    }
    void display(){
        cout<<x<<endl;
    }
    friend void add(A &,B);
};

void add(A &a, B b){
    a.x += b.x;
}

int main(){
    A a1;
    B b1;
    a1.setData(10);
    b1.setData(10);
    add(a1,b1);
    a1.display();
    b1.display();
}