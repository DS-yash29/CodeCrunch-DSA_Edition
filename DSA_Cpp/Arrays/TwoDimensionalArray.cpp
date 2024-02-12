#include<iostream>
using namespace std;


/*
  Array of Arrays is known as 2-D Arrays. 
    An 2-D Array of 3 rows & 3 Columns
           [ [1,2,3],
             [4,5,6],
             [7,8,9] ]
*/

int main(){
    int row = 2;int col = 3;

    // Initialzing -> First Approach
    int a[row][col] = {{1,2,3},{4,5,6}};

    // Second Approach;
    int a1[col][row] = {{1,2},{3,4},{5,6}}; 

   // Third Approach;
    // int a2[row][col];
    // for(int i = 0;i<row;i++){
    //     for(int j = 0;j<col;j++){
    //         cin>>a[i][j];
    //     }cout<<endl;
    // }
    


    //  Accessing Elements From 2-D Array.
    cout<<a[1][2]<<endl;
    
    // Updating Elements 
    a[0][1] = 7;
    a[1][2] = 11;
    
    // Traversing & Printing the 2-D Array.
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}