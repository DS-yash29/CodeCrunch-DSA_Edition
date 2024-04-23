#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> items,wieghts,profits;
    items = {1,2,3,4,5};
    wieghts = {1,2,3,4,5};
    profits = {10,20,30,35,45};
    int knap_capacity = 6;
    int dp[items.size()+1][knap_capacity+1];

    for(int i = 0;i<=items.size();i++){
        dp[i][0] = 0;
    }
    for(int i = 0;i<=knap_capacity;i++) dp[0][i] = 0;

    for(int i = 1;i<=items.size();i++){
        for(int j =1;j<=knap_capacity;j++){
            int rw = wieghts[i-1];
            if(rw<=j){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-rw] + profits[i-1]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[items.size()][knap_capacity];
}