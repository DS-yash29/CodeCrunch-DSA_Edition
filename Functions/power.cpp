#include<iostream>
using namespace std;

/*
    power(a,b)
    Function To Calculate a raise to power b
    Example: 
        power(2,2) -> 4
        power(3,2) -> 9 
        power(27,1) -> 27
*/

int power(int a,int b){
    int ans = 1;
    
    for(int i = 0;i<b;i++){
        ans *= a;
    }
    return ans;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<" raise to power "<<y<< " is "<<power(x,y);
    return 0;
}