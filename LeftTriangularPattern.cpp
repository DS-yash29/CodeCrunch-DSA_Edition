#include<iostream>
using namespace std;

/*
   To Print Left Inverted Triangular Pattern

        *
       **
      ***
     ****
    *****       
*/

int main(){
    int row = 5,i = 0,j,k;
    while(i<row){ // For No. of Rows
       j = row-i-1;
       while(j>=0){ // For Printing No. of spaces on the left hand side
        cout<<" ";
        j--;
       }
       k = 0;
       while(k<=i){ // For printing no of stars in the same row;
        cout<<"*";
        k++;
       }

       cout<<endl;i++;
       

    }
}