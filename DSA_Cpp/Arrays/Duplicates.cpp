#include <iostream>
using namespace std;

/* 
    Program To Find & Remove Duplicates.
    [1,3,4,5,5,7,9,9] -> [1,3,4,5,7,9];
 */

void CheckDuplicates(int arr[], int n)
{
    cout << "Duplicates Elements" << endl;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((arr[i] == arr[j]) && (arr[j] != -765332)){
                cout << arr[j] << " ";
                arr[j] = -765332; // Replacing Duplicates With a Negative No. That does not exist in an array.
                }
            }
        }
    cout<< "\nArray After Removing Duplicates :  " << endl;
    for (int i = 0; i < n; i++){
        if (arr[i] != -765332)
            cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {4,7,8,0,-326,7,0};
    int n = sizeof(arr) / sizeof(int);
    CheckDuplicates(arr, n);
    return 0;
}