#include<iostream>
using namespace std;

/*
    Function to check whether a given number is prime or not.
    Example : 
        23 -> true
        37 -> False
*/

bool is_prime(int n){
    bool prime = true;

    if(n<=1){
        return !prime;
    }
    if(n==2){
        return prime;
    }

    for(int i = 2;i<n;i++){
        if(n%i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

int main(){
    int x = 37;
    if(is_prime(x)){
        cout<<"Yes! The Given Number is Prime";
    }else{
        cout<<"Composite :"<<x;
    }
    return 0;
}