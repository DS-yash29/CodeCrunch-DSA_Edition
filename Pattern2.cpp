#include<iostream>
using namespace std;

/*
To Print a half triangular  pattern

    *
    **
    ***
    ****

*/

int main(){
    int n=4,i=0,j;
    while(i<=n){ //  For Printing Rows , starting from 0 , pattern will contain n rows
        j = 0;
        while(j<i){ // For Printing Columns As No of columns would be the value of the current row
            cout<<"*"<<" ";
            j++;
        }  cout<<'\n';
i++;
    }
    return 0;

}