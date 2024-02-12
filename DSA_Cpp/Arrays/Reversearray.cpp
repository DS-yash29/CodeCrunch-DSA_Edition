#include<iostream>
using namespace std;

/*
    Reversing elements of array
    a1 -> {1,2,3,4,5};
    reversed_a1 -> {5,4,3,2,1};
*/

// Using Call By reference method
void reverseArray(int a[],int s,int l){
    while(s<=l){
        int temp = a[s];
        a[s] = a[l];
        a[l] = temp;
        s++;l--;
    }
}

int main(){

    int a1[5]= {1,3,5,7,9};
    int length = sizeof(a1)/sizeof(int);
    

    cout<<"Array Before Reversing : "<<endl;
    
    for(int i = 0;i<length;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;

    reverseArray(a1,0,length-1);

    cout<<"Array After Reversing : "<<endl;
    for(int i = 0;i<length;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;

}