#include<iostream>
using namespace std;

/* To Print a Pattern like This
    1 2 3
    4 5 6 
    7 8 9
*/

int main(){
    int row,i=0,j,sum = 1;
    //cout<<"Enter The No of Rows To be printed: ";
    row = 3;

    while(i<row){
         j =0;
        while(j<row){
            cout<<sum<<" ";
            sum ++;
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}