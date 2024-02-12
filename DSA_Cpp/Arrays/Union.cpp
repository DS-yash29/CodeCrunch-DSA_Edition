#include<iostream>
using namespace std;

/*
To Find Union Of Two Arrays.
A1 -> [1,2,3,4,5];
A2 -> [3,4,5,6,7];
A1 U A2 -> [1,2,3,4,5,6,7];
*/

bool isPresent(int a[],int size , int n){
   bool present = false;
   for(int i = 0;i<size;i++){
    if(a[i] == n){
        return true;
        }
    } return present;
}

int main(){
    int a1[5] = {1,2,3,4,5};
    int a2[7] = {3,4,5,6,7,8,9};
    int m = sizeof(a1)/sizeof(a1[0]);
    int n = sizeof(a2)/sizeof(a2[0]);
    int total_size = m+n;
    int result[total_size];
    int total_elem = 0;

    for(int i = 0;i<m;i++){ // Inserting elements of first Array.
        result[i] = a1[i];
        total_elem ++;
    }

    // Inserting elements of second;
    for(int i = 0;i<n;i++){
        if(!(isPresent(result,total_elem,a2[i]))){
            result[total_elem] = a2[i];
            total_elem ++;
        }
        
    }
    for(int i =0;i<total_elem;i++){
        cout<<result[i]<<" ";  
     }
}