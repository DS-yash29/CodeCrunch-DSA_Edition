#include<iostream>
using namespace std;

int bs(int *arr,int s,int e,int target){
    int mid = s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return bs(arr,s,mid-1,target);
    }
    return bs(arr,mid+1,e,target);
}

int main(){
    int arr[7] = {4,12,15,17,30,45,60};
    cout<<bs(arr,0,7,60);
}