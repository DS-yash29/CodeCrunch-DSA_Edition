#include<iostream>
using namespace std;

/*
    is_even(n);
    Function to check whether a given number is an even number or not
    Example :
        is_even(29) -> 0 // As is is an odd no.
        is_even(20) -> 1 // True.
*/

bool is_even(int n){
    if(n%2 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int x = cin.get();
    if(is_even(x)){
        cout<<"Yes! The given number is even ";
        
    }else{
        cout<<"Odd ";
    }
    return 0;
}