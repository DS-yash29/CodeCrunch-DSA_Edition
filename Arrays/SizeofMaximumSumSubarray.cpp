#include<bits/stdc++.h>
using namespace std;

pair<int,int> sizeofSubarray(int* arr,int size){
    pair<int,int> ans;
    int i=0,j=0,curr_sum=0,final_sum = INT_MIN,final_len = INT_MIN;
    while(j<size){
        curr_sum += arr[j];
        
        final_sum = max(final_sum,curr_sum);
        final_len = max(final_len,j-i+1);
        if(curr_sum<0){
            curr_sum = 0;
            final_len = 0;
            i= j+1;
        }
        j++;
    }
    ans.first = final_sum;
    ans.second = final_len;
    return ans;
}

int main(){
    int arr[7] = {1,-2,3,-4,5,6,7};
    pair<int,int> ans;
    ans = sizeofSubarray(arr,7);
    cout<<"Maximum Sum Subarray "<<ans.first<<" Length "<<ans.second<<" \n";
}