#include<iostream>
using namespace std;

void print_1_N(int n){
    if(n==0){
        return ;
    }
    print_1_N(n-1);
    cout<<n<<" ";
}

int main(){
    int x;
    cin>>x;
    cout<<"Printing First "<<x<<" Numbers From 1 "<<endl;
    print_1_N(x);
}