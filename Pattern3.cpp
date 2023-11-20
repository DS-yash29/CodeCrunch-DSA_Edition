#include<iostream>
using namespace std;

/*
To Print a half triangular pattern with no's

    1
    2 3 
    4 5 6
    7 8 9 10

*/

int main(){
    int row = 4,i = 0,j,sum = 1;
    while(i<row){
        j = 0;
        while(j<=i){
            cout<<sum<<" ";
            sum ++;
            j ++;
        }cout<<endl;
        i++;
    }return  0;
    
}