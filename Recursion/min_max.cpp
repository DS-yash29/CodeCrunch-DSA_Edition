#include<iostream>
using namespace std;

int max_elem(int arr[],int n,int max){
    int m = arr[n-1];
    if(m>max){
        max = m;
    }
    if(n==1){
        return max;
    }
    return max_elem(arr,n-1,max);        
}

int min_elem(int arr[],int n,int min){
    int m = arr[n-1];
    if(m<min){
        min = m;
    }
    if(n==1){
        return min;
    }
    return min_elem(arr,n-1,min);        
}

int main(){
    int arr[5] = {34,23,-1,10,-565};
    cout<<max_elem(arr,5,INT_MIN)<<endl;
    cout<<min_elem(arr,5,INT_MAX);
}