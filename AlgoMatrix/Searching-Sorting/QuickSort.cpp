// #include<iostream>
// using namespace std;

// // int partition(int *arr,int x,int y){
// //     int s = x;
// //     int e = y;
// //     int pivot = arr[s-1];
    
// //     while(true){
// //         while(arr[s]<pivot){
// //             s++;
// //         }
// //         while(arr[e]>pivot){
// //             e--;
// //         }
// //         if(arr[s]>arr[e] && s<e){
// //             int temp = arr[s];
// //             arr[s] = arr[e];
// //             arr[e] = temp;
// //         }
// //         if(s>e){
// //             int temp = arr[y];
// //             arr[y] = pivot;
// //             arr[x] = temp;
// //             break;
// //         }
// //     }return y;
// // }

// int partition(int *arr, int x, int y) {
//     int s = x;
//     int e = y;
//     int pivot = arr[s]; // Use the first element as the pivot
    
//     while (true) {
//         while (arr[s] < pivot) {
//             s++;
//         }
//         while (arr[e] > pivot) {
//             e--;
//         }
//         if (s >= e) {
//             return e;
//         }
//         // Swap arr[s] and arr[e]
//         int temp = arr[s];
//         arr[s] = arr[e];
//         arr[e] = temp;
//         s++;
//         e--;
//     }
// }


// void Quicksort(int* arr,int s,int e){
//     if(s<e){
//         int j = partition(arr,s,e);
//         Quicksort(arr,s,j-1);
//         Quicksort(arr,j+1,e);
//     }
// }

// void print(int*arr,int s){
//     for(int i = 0;i<s;i++){
//         cout<<arr[i]<<' ';
//     }cout<<endl;
// }

// int main(){
//     int arr[7] = {23,12,-44,20,14,-17,-59};
//     print(arr,7);
//     Quicksort(arr,1,6);
//     print(arr,7);
// }

#include<iostream>
using namespace std;

int partition(int *arr, int x, int y) {
    int s = x;
    int e = y;
    int pivot = arr[s]; // Use the first element as the pivot
    
    while (true) {
        while (arr[s] < pivot) {
            s++;
        }
        while (arr[e] > pivot) {
            e--;
        }
        if (s >= e) {
            return e;
        }
        // Swap arr[s] and arr[e]
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void Quicksort(int* arr, int s, int e) {
    if (s < e) {
        int j = partition(arr, s, e);
        Quicksort(arr, s, j);
        Quicksort(arr, j + 1, e);
    }
}

void print(int* arr, int s) {
    for (int i = 0; i < s; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int arr[7] = {-23, -120, -44, 20, 140, -17, 59};
    print(arr, 7);
    Quicksort(arr, 0, 6);
    print(arr, 7);
    return 0;
}
