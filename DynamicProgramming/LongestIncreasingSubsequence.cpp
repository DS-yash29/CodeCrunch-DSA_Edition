#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1 = "Yash";
    string s2 = "asha";
    int l1 = s1.length(),l2=s2.length();
    
    int mat[l1+1][l2+1];
    stack<char> a;
    for(int i = 0;i<=l1;i++){
        mat[i][0] = 0;
    }
    for(int i = 0;i<=l2;i++){
        mat[0][i] = 0;
    }
    
    for(int i = 1;i<=l1;i++){
        for(int j = 1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]) {
                mat[i][j] = 1+mat[i-1][j-1];
            }
            else{
                mat[i][j] = max(mat[i-1][j],mat[i][j-1]);              
            }
        }

    }
    for(int i =0;i<=l1;i++){
        for(int j = 0;j<=l2;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }

    int y,z;
    y = l1;
    z = l2;
    while(y!=0 || z!=0){
        if(mat[y-1][z] != mat[y][z] && mat[y][z-1] != mat[y][z] && mat[y][z] !=0){
            a.push(s1[y-1]);
        }
        if(mat[y-1][z] >= mat[y][z-1]) y--;
        else z--;
        if(y == 0 || z == 0) break;
    }
    string str_res = "";
    while(!a.empty()){
        str_res += a.top();
        a.pop();
    }
    cout<<str_res;

    

    
}