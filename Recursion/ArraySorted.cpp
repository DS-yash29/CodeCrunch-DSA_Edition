#include<iostream>
using namespace std;

bool isSorted(int* arr,int size,int s){

    if(arr[s]>arr[s+1] && s<=size-1){
        return false;
    }
    if(arr[s]<=arr[s+1] && s==size-2){
        return true;
    }
    return isSorted(arr,size,s+1);

}

int main(){
    int arr[7] = {31,32,33,34,35,36,37};
    cout<<isSorted(arr,7,0)<<endl;
    arr[6] = -1;
    cout<<isSorted(arr,7,0);
}