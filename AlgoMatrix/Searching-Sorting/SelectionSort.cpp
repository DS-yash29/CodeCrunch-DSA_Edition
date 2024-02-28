#include<iostream>
using namespace std;

void SortArray(int *arr,int s){
    for(int i=0;i<s-1;i++){
        int min =i;
        for(int j = i;j<s;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
    if(arr[i]>arr[min]){
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    cin>>s;
    int *a = new int[s];
    for(int i = 0;i<s;i++){
        int elem;
        cout<<"Enter "<<(i+1)<<" Element: \n";
        cin>>elem; 
        *(a+i) = elem;
    }
    cout<<"Array Before Sorted: \n";
    printarray(a,s);
    cout<<"Array After Sorted: \n";
    SortArray(a,s);
    printarray(a,s);

}

