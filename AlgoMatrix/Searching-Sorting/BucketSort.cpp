#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Sort(vector<double> &arr){
    int s = arr.size();

    for(int i = 0;i<s;i++){
        arr[i] = arr[i]*100;
    }
    // Implementing Insertion Sort.
    int si = 0;
    for(int i = 0;i<s;i++){
        int j = si;
        while(j>0){
            if(arr[j]<arr[j-1]){
                double temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp; 
            }else{
                break;
            }
            j--;
        }
        si++;
    }
    for(int i = 0;i<s;i++){
        arr[i] = arr[i]/100;
    }
}
void bucketSort(double *arr,int n){
    vector<vector<double>> ans(n) ;
    for(int i = 0;i<n;i++){
        int val = floor(arr[i]*10);
        ans[val].push_back(arr[i]); 
    }

    int idx = 0;
    for(int i = 0;i<10;i++){
        int j = 0;
        Sort(ans[i]);
        while(j<ans[i].size() && idx<n){
            arr[idx++] = ans[i][j];
            j++;
        }
    }   
}


void printArray(double* arr,int s){
    for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    double a = 0.78;
    double arr[12] = {0.74 ,0.93, 0.49, 0.53 ,0.31 ,0.66, 0.23 ,0.94 ,0.09 ,0.78, 0.93, 0.31};
    printArray(arr,12);
    cout<<endl;
    bucketSort(arr,12);
    printArray(arr,12);
}