#include<iostream>
using namespace std;

/*
Finding Max_sum in a fixed Window Size
*/


int maxSum(int *arr,int size,int k);
int main(){
    int arr[7] = {1,2,3,-7,3,8,-10};
    int s = maxSum(arr,7,0);
    cout<<"Maximum Sum Subarray of Window Size "<<3<<" "<<s<<endl;
}

int maxSum(int* arr,int size,int k){
    int i = 0,j=0,curr_sum=0,final_sum =INT_MIN;
    while(j<size){
        curr_sum += arr[j];
        if(j-i+1 != k){
            j++;
            continue;
        }
        if(curr_sum>final_sum) final_sum = curr_sum;
        curr_sum -= arr[i];
        i++;
        j++;
    }
    if(final_sum==INT_MIN) return -100;
    return final_sum;
}