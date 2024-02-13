#include<iostream>
using namespace std;

void bubbleSort(int *a,int s){
    for(int i = 0; i < s-1; i++){
        for(int j = 0;j<s-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void printarray(int *arr,int s){
    for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int s;
    cout<<"Enter Array Size\n";
    cin>>s;
    int *a = new int[s];
    for(int i = 0;i<s;i++){
        int elem;
        cout<<"Enter Element of Index"<<i<<" : ";
        cin>>elem;
        *(a+i) = elem;
    }
    cout<<"Array Before Sort\n";
    printarray(a,s);
    cout<<"Array After Sort\n";
    bubbleSort(a,s);
    printarray(a,s);
}
