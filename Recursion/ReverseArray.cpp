#include<iostream>
using namespace std;

int i = 0;
void reverse(int *arr , int s){
    if(i>=s/2) return;
    int temp = *(arr+i);
    *(arr+i) = *(arr + s-i-1);
    *(arr+s-1-i) = temp;
    i++;
    reverse(arr,s);  
       
}

void printArray(int *arr , int s){
    for(int i  = 0;i<s;i++){
        cout<<*(arr+i) <<" ";
    }
    cout<<endl;
}

int main(){
    int  arr[] = {1,2,3,4,5};
    printArray(arr,5);
    reverse(arr,5);
    printArray(arr,5);
}