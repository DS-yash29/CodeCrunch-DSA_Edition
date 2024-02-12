#include<iostream>
using namespace std;

/*
    Function To Find nCr (R combinations out of n).
    Example:
        5c2  -> 10
        10c2 -> 45

*/

int fact(int n){
    int prod = 1;
    for(int i = 0;i<n;i++){
        prod = prod*(i+1);
    }
    return prod;
}

int nCr(int n,int r){
    return (fact(n) / ((fact(n-r)*fact(r))));

}

int main(){
    int n ,r = cin.get();
    cout<<n<<" c "<<r<<" is "<<nCr(n,r);
    return 0;
}