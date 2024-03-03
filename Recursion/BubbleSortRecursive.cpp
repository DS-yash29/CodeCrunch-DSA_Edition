#include<iostream>
using namespace std;

void BubbleSortRecursively(int *arr,int size,int i){
    if(i==size-1){
        return ;
    }
    int j = 0;
    while(j<size-i-1){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        j++;
    }
    BubbleSortRecursively(arr,size,i+1);
}

void Printarray(int *arr,int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[11] = {7,-9,45,21,90,-23,100,34,56,9,87};
    Printarray(arr,11);
    BubbleSortRecursively(arr,11,0);
    Printarray(arr,11);
}