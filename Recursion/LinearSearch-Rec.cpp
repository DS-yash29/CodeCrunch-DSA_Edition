#include<iostream>
using namespace std;


int linearSearchRecursive(int *arr,int size,int target){
    if(size<0){
        return -1;
    }
    if(arr[size]==target){
        return size;
    }

    return linearSearchRecursive(arr,--size,target);
}

int main(){
    int arr[10] = {4,-9,3,0,12,34,65,91,67,23};
    int idx  = linearSearchRecursive(arr,10,91);
    if(idx>=0){
        cout<<"Element Found At "<<idx<<" Index \n";
    }else{
        cout<<"Not Found";
    }
}