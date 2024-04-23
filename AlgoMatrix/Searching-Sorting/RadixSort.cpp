#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int size){
    int m = INT_MIN;
    for(int i = 0;i<size;i++){
        m = max(m,arr[i]);
    }
    return m ;
}

void CountSort(int arr[],int size,int k){
    int temp[10] ;
    int *  op = new int[size];
    for(int i = 0;i<10;i++) temp[i] =  0;
    for(int i = 0;i<size;i++){
        int lsb = (arr[i]/k)%10;
        temp[lsb]++;
    } 
    for(int i = 1;i<10;i++){
        temp[i] += temp[i-1];
    }
    for(int i = size-1;i>=0;i--){
        int elem = (arr[i]/k)%10;
        temp[elem]--;
        op[temp[elem]] = arr[i];
    }
    for(int i = 0;i<size;i++){
        arr[i] = op[i];
    }
    delete op;

}

int main(){
    int arr[] = {12,32,23,0,47,5,98,505,87};
    int m = getMax(arr,9);
    for(int i = 1;m/i>0;i*=10) CountSort(arr,9,i);
    for(int i = 0;i<9;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
