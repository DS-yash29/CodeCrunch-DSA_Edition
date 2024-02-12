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
    Complex(Complex& c){
        this->real = c.real;
        this->imag = c.imag;
    }
    void display(){
        cout<<real<<" + "<<imag<<"j \n";
    }

};

int main(){
    Complex c1(5,7);
    Complex c2(c1);
    cout<<"Values of c1: \n";
    c1.display();
    cout<<"\nValues of c2: \n";
    c2.display();
  
}