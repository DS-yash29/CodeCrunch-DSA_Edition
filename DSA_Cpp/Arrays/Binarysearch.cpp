#include<iostream>
using namespace std;

/*
    An Efficient Way to search for an element if the data is organized;
    
*/

int binarysearch(int a[],int elem,int length){
    int s=0,e=length-1,middle;
    
    while(s<=e){
        middle = s+(e-s)/2;
        if(a[middle] == elem){
            return middle;
        }
        if(a[middle]>elem){
            e = middle;
        }else{
            s = middle+1;
        }
        middle = (s+(e-s)/2);
    }return -1;
}

int main(){
    int a[10] = {2,4,5,9,17,19,29,56,99,115};
    int l = (sizeof(a)/sizeof(int))-1;
    int pos = binarysearch(a,578,l);
    if(pos>=0){
        cout<<"2 is at "<<pos+1<<" Position ";
    }else{
        cout<<"Not Present";
    }
    return 0;
    
}