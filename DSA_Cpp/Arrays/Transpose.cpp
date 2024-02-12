#include<iostream>
using namespace std;

/*
    Given a 2-D array , transpose it's rows & columns
    [ [1,2,3],
     [4,5,6] ] - > [[1,4],
                    [2,5],
                    [4,6]];
*/

void transpose_matrix(int a[2][4],int b[4][2]){
    cout<<"Matrix Before Transpose: "<<endl;;
    for(int i = 0;i<2;i++){
        for(int j = 0;j<4;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    for(int i = 0;i<2;i++){
        for(int j = 0;j<4;j++){
            b[j][i] = a[i][j];
        }
    }
    cout<<"Maxtrix After Transposing: "<<endl;;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<2;j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
}


int main(){
    int m1[2][4] = {2,4,6,8,10,12,14,16};
    int m2[4][2]; // As the now of rows & Columns gets swapped.
    transpose_matrix(m1,m2);
}