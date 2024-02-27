#include<iostream>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1); 
}

int main(){
    int x;
    cout<<"Enter the Number \n";
    cin>>x;
    cout<<"Factorial of the Number\n";
    cout<<fact(x);

}