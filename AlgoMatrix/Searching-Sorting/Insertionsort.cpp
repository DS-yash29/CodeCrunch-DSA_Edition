#include<iostream>
using namespace std;

void insertionSort(int *arr,int s){
    int si = 0;
    for(int i = 0;i<s;i++){
        // if(arr[i]<arr[si]){
        //     int temp = arr[i];
        //     arr[i] = arr[si];
        //     arr[si] = temp;
        // }
        int j = si;
        while(j>0){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp; 
            }else{
                break;
            }
            j--;
        }
        si++;
    }
}

void printArray(int *a,int s){
    for(int i = 0;i<s;i++){
        cout<<*(a+i)<<" ";
    }cout<<endl;
}

int main(){
    int s;
    cout<<"Enter Array Size: "<<endl;
    cin >> s;
    int *a = new int[s];
    for(int i = 0;i<s;i++){
        cout<<"Enter Element at index "<<i<<" : ";
        cin>>*(a+i);
    }
    cout<<"Elements Before Sorted: "<<endl;
    printArray(a,s);
    cout<<"Elements After Sorted: "<<endl;
    insertionSort(a,s);
    printArray(a,s);
}