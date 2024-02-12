#include<iostream>
using namespace std;

/*
    Linear Search :
    Basically means searching for a specific element in a container linearly.
    It's Time Complexity in Worst Case -> O(n) {When The Item to be searched is usually at the end or even worse not present as well}
*/

int Linearsearch(int a[],int elem,int length){
    int key = -1;
    for(int i = 0;i<length;i++){
        if(a[i] == elem){
            key = i;
            break;
        }
    }return key;
}

int main(){
    int a[] = {1,4,8,9,11,17,27,29};
    int l = sizeof(a)/sizeof(int);
    int key = 20;
    int elemnt_key = Linearsearch(a,key,l);
    if(elemnt_key != -1){
        cout<<"Element is Present at "<<elemnt_key+1<<" Position "<<" ";
    }else{
        cout<<"Not Present";
    }
    

}