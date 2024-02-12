#include <iostream>
using namespace std;
/*
Approach :

    Initially Reverse the Array :
    After  That Reverse the array from first till Kth Position 
    Then Reverse the positions from remaining part of the array.

*/
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k = k % n; // This Will Ensure That the array does not exceed The Length of the Array.
    // Reversing The Entire Array
    reverse(arr, 0, n - 1); 
    // Reversing The First Half of the Array
    reverse(arr, 0, k - 1);
    // Reversing the Second Half
    reverse(arr, k, n - 1);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // Array Before Rotation
    cout<<"Array Before Rotation: "<<endl;
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl<<endl;

    rotateArray(arr, n, k);

    cout<<"Array After Rotation By "<<k<<" Positions."<<endl;
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
