#include<iostream>
using namespace std;

int Prod(int a,int b){
    if(b==1){       
        return a;
    }
    return a+Prod(a,b-1);
}

int main(){
    int x,y;
    cout<<"Enter Both The Numbers "<<endl;
    cin>>x>>y;
    cout<<"Product of Two Given Numbers is \n";
    cout<<Prod(x,y);
}