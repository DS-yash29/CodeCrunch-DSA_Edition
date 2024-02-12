#include<iostream>
using namespace std;

// Creating a complex number class to add two Complex numbers using friend function.

class Complex{
    int real;
    int imag;
    public:
    Complex(int x = 0,int y = 0){
        real = x;
        imag = y;
    }
    void display(){
        cout<<real<<" + "<<imag<<"j \n";
    }

    Complex friend add(Complex , Complex);
};

Complex add(Complex c1,Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main(){
    Complex c1(5,7);
    Complex c2(0,9);
    c1.display();
    c2.display();
    add(c1,c2).display();
}