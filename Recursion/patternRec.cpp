#include<iostream>
using namespace std;

void triangular(int n,int i){

    if(i==n){
        return ;
    }
    int j = 0;
    while(j<=i){
        cout<<" * ";
        j++;
    }cout<<endl;
    triangular(n,i+1);
}

void triangularReverse(int n,int i){
    if(i==n){
        return ;
    }
    int j = n-i;
    while(j--){
        cout<<" * ";
        
    }cout<<endl;
    triangularReverse(n,i+1);
}

void rightInverted(int n,int i){
    triangular(n,i);
    for(int i = 0;i<n+1;i++){
        cout<<" * ";
    }cout<<endl;
    triangularReverse(n,i);
}

int main(){
    int x;
    cout<<"Enter No of Rows: ";
    cin>>x;
    cout<<endl;
    rightInverted(x,0);
}