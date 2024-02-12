#include<iostream>
using namespace std;

/*
    To Print Spiral Pattern Like : 
    [[1,2,3],
     [4,5,6],
     [7,8,9]]

     --> [1,2,3,6,9,8,7,4,5]
*/

int main(){
    int a[3][3] = {{10,2,-328},{4,358,6},{2123,237,23}};
    int row = 3;
    int col = 3;
    int ans[row*col];
    int left,right,top,bottom;
    left=0;
    right=col-1;
    top = 0;
    bottom = row-1;
    cout<<"[ ";
    while((right>=left) && (bottom>=top)){

        for(int i = left;i<=right;i++){
            cout<<a[top][i]<<" ";
        }top++;

        for(int i = top;i<=bottom;i++){
            cout<<a[i][right]<<" ";
        }right--;

        for(int i = right;i>=left;i--){
            cout<<a[bottom][i]<<" ";
        }bottom --;

        for(int i = bottom;i>=top;i--){
            cout<<a[i][left]<<" ";
        }left++;
    }cout<<" ]";
}