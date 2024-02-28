#include<iostream>
using namespace std;

int funcRev(int n,int s){
    if(n==0){
        return s;
    }
    return funcRev(n/10,s*10+n%10);
}

int  main(){
    int x;
    cout<<"Enter The Number\n";
    cin>>x;
    cout<<x<<" Reversed Number is "<<funcRev(x,0);
}