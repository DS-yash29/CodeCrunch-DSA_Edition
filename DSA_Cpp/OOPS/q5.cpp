#include<iostream>
using namespace std;

// Swapping of Private data members of two class using friend function.

class c2;

class c1{
    int d1;
    public:
    c1(int data1){
        d1 = data1;
    }
    int getData1(){
        return d1;
    }

    void friend swap(c1&,c2&);
};

class c2{
    int d2;
    public:
    c2(int data2){
        d2 = data2;
    }
    int getData2(){
        return d2;
    }
    void friend swap(c1&,c2&);
};

void swap(c1& c , c2& d ){
    int temp = c.d1;
    c.d1 = d.d2;
    d.d2 = temp;
}

int main(){
    c1 c(5);
    c2 d(10);

    cout<<"Data of Both the classes before swapping "<<c.getData1()<<" "<<d.getData2()<<endl;
    swap(c,d);
    cout<<"Data of Both the classes after swapping "<<c.getData1()<<" "<<d.getData2()<<endl;
}