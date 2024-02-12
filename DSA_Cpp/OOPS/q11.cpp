#include <iostream>
using namespace std;

const int mysize = 4;

class MyVector {
    int x[mysize];
    public:
    MyVector();
    MyVector(int* v);
    MyVector friend operator * (MyVector &m , int n);
    friend istream & operator >> (istream &,MyVector &m);
    friend ostream & operator << (ostream &,MyVector &m);
};

MyVector :: MyVector(){
    for(int i = 0;i<mysize;i++){ // Initially Declaring the vecotr to be zero.
        x[i] = 0;
    }
}

MyVector :: MyVector(int* v){
    for(int i = 0;i<mysize;i++){
        x[i] = v[i];
    }
}

MyVector operator* (MyVector &m1,int m){
    MyVector res;
    for(int i = 0;i<mysize;i++){
        res.x[i] = m*m1.x[i];
    }
    return res;
}

istream & operator >> (istream &din,MyVector &v1){
    for(int i = 0;i<mysize;i++){
        din >> v1.x[i];
    }
    return din;
}

ostream & operator << (ostream & dout,MyVector &v2){
    for(int i = 0;i<mysize;i++){
        dout<<v2.x[i]<<" ";
    }return dout;
}

int v[mysize] = {2,3,44,5};

int main(){
    MyVector v1(v);
    cout<<"Taking Input\n";
    cin>>v1;
    cout<<"Printing Vector: \n";
    cout<<v1;
    cout<<"Multipying Vector By 5\n";
    MyVector v2;
    v1 = v1*5;
    cout<<v1;
}

