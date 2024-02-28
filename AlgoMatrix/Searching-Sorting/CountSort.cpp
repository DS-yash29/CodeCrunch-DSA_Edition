#include<iostream>
using namespace std;

int getMax(int *arr,int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }return max;
}

void printArray(int* arr,int s){
    for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {325,78,12,12,90,56,121,100,87,23};
    int max_elem = getMax(arr,10);
    cout<<max_elem<<endl;
    int *arr2 = new int[max_elem+1];
    for(int i = 0;i<max_elem;i++){
        arr2[i] = 0;
    }
    for(int i = 0;i<10;i++){
        arr2[arr[i]]++;
    }
    
    printArray(arr,10);
    cout<<endl;
    int cnt = 0;
    for(int i = 0;i<=max_elem && cnt<10;i++){
        int j = arr2[i];
        while(j>0){
            arr[cnt++] = i;
            j--;
        }
    }
    printArray(arr,10);

}