#include<bits/stdc++.h>
using namespace std;


const int size_array = 25;
class SearchingAlgo {
    int *arr ;
    public:
    SearchingAlgo(int *a){
        arr = new int[size_array];
        for (int i = 0; i < size_array;i++){
            *(arr+i) = *(a+i);
        }
    }
    int linearSearchIterative(int key);
    int linearSearchRecursive(int key,int s);
    int* array_sorting();
    int binarySearchIterative(int key);
    int binarySearchRecursive(int key,int s , int e);
};


int SearchingAlgo::linearSearchIterative(int key){
    int ans = -1;
    for (int i = 0; i < size_array;i++){
        if( (*(arr+i)) == key){
            ans = i;
            break;
        }
    }
    return ans;
}


int SearchingAlgo :: linearSearchRecursive(int key,int s){
    if(s == size_array) return -1;
    if(*(arr+s) == key) return s;
    return linearSearchRecursive(key, ++s);


}


int* SearchingAlgo::array_sorting(){
    int arr2[size_array];
    for(int i = 0; i < size_array;i++){
        arr2[i] = *(arr+i);
    }    
    sort(begin(arr2),end(arr2));
    for(int i = 0;i<size_array;i++){
        *(arr+i) = arr2[i];
    }
    return arr;
}


int SearchingAlgo::binarySearchIterative(int key){
    int s = 0;
    int e = size_array;
    int mid = s + (e-s)/2;
    while(s<=e){
        
        if(*(arr + mid) == key){
            return mid;
        }
        else if (*(arr+mid) > key){
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }return -1;
}

int SearchingAlgo :: binarySearchRecursive(int key,int s,int e){
    int mid = s + (e-s)/2;
    if(s>e) {return -1;}
    if(*(arr+mid) == key){return mid;} 
    else if(*(arr+mid)>key){return binarySearchRecursive(key,s,mid-1);} 
    else {return binarySearchRecursive(key,mid+1,e);}   
}

int main(){
    int a[size_array] = {7,9,-23,90,100,101,-20,203,111,5,-23,90,100,-298,10100,2234,0,-13,49,36,64,9,4,27,29};
    SearchingAlgo s(a);
    cout<<"Enter The Key you want to search\n";
    int key;
    cin>>key;
    s.array_sorting();
    int present = s.binarySearchRecursive(key,0,size_array);
    int present2 = s.binarySearchIterative(key);
    if(present != -1){
        cout<<"Element"<<key<<" is present at "<<present<<" th Position\n";
    }else{
        cout<<"Element Not Found";
    }
    if(present2 != -1){
        cout<<"Element"<<key<<" is present at "<<present2<<" th Position\n";
    }else{
        cout<<"Element Not Found";
    }
}
