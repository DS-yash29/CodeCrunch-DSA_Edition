#include<iostream>
using namespace std;

/*

    Performing Basic Operations on Arrays Such as :
    1. Creating Length Function - > Returns the length of array.
    2. Printing Elements of array.
    3. Sum of elements of array.

*/


void printArray(int a[],int length){
    int l = 0;
    while(l<length){
        cout<<a[l]<<" ";l++;
    }cout<<endl;
}

int sum_elements(int a[],int length){
    int sum = 0, l=0;
    while(l<length){
        sum += a[l];
        l++;
    }return sum;
};

int main(){
    int a1[] = {4,8,9,11,17,27,29};
    cout<<"Length of Array is -> ";
    int y = 0;
    for (int i = 0;i<sizeof(a1)/sizeof(int);i++){
        y++;
    }cout<<y<<endl;
   
    cout<<" Elements of Array are "<<endl;
    printArray(a1,y);
    cout<<"\n Sum of elements of the array is -> "<<sum_elements(a1,y)<<endl;
}