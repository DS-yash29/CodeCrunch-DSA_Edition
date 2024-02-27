#include<iostream>
using namespace std;

int SumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return n%10 + SumOfDigits(n/10);
}

int main(){
    int x;
    cout<<"Enter The Number"<<endl;
    cin>>x;
    cout<<"Sum of Digits: "<<SumOfDigits(x);
}