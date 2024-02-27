#include<iostream>
using namespace std;

int fib(int n){
    if(n==2||n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main(){
    int x;
    cout<<"Enter The Fibonnaci Series Number: "<<endl;
    cin>>x;
    cout<<fib(x);
}