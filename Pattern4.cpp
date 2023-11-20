#include<iostream>
using namespace std;

/*
To Print a half triangular pattern with no's

    1
    2 3 
    3 4 5
    4 5 6 7

*/

int main(){
    int row = 4,i = 0,sum ;
    while(i<=row){
        sum = i;

        while(sum>=1){
            cout<<sum<<" ";
            sum--;
        }cout<<endl;i++;
    }
    return 0;
    
}