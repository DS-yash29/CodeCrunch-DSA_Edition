#include<iostream>
using namespace std;

/*
Kadane's Algo
Using Sliding Window approach
*/

int maxSum(int* arr,int size);
int main(){
    int arr[7] = {1,2,3,4,-5,-6,-7};
    int s = maxSum(arr,7);
    cout<<"Maximum Sum of Subarray: "<<s<<endl;
}

int maxSum(int* arr,int size){
    int i = 0;
    int j = 0;
    int curr_sum = 0;
    int final_sum = INT_MIN;
    while(j<size){
        curr_sum += arr[j];

        if(final_sum<curr_sum){
            final_sum = curr_sum;
        }

        if(curr_sum<0){
            curr_sum = 0;
            i = j+1;
        }
        j++;
    }
    return final_sum;
}