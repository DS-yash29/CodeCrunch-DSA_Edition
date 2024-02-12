#include<iostream>
using namespace std;

// Traversing The array & Printing the elements

int main(){
    int row = 3;
    int col = 4;
    int a1[row][col] = {{2,4,6,8},{10,12,14,16},{18,20,22,24}};
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<a1[i][j]<<" ";
        }cout<<endl;
    }
}