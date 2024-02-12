#include<iostream>
using namespace std;

/*

A1 -> [[1,2,3],[4,5,6]] | A2 -> [[7,8,9],[10,11,12]];
A1+A2 -> [[8,10,12],[14,16,18]];

Two 2-D Matrices Can Only Be Added if it has same no of rows and columns.

*/

void MatAddition(int m1[2][3],int m2[2][3]){ // The Matrix Can only be added if both the rows and columns of both the matrices are equal
    int m3[2][3];
    for(int i = 0;i<2;i++){ // Performing Addition.
        for(int j = 0;j<3;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout<<"Addition of Matrices : "<<endl;
    for(int i = 0;i<2;i++){
        cout<<"[";
        for(int j = 0;j<3;j++){
            cout<<m3[i][j]<<" ";
        }cout<<"]";cout<<endl;
    }


}

int main(){
    int a1[2][3] = {1,2,3,4,5,6};
    int a2[2][3] = {7,8,9,10,11,12};
    MatAddition(a1,a2);
}