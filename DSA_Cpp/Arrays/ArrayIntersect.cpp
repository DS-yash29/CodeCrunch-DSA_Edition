#include<iostream>
using namespace std;

bool isPresent(int a[] , int size,int target){
        for(int i = 0;i<size;i++){
            if(a[i] == target){
                return 1;
            }
        }return 0;
    }


int main(){
    int a1[14] = {4,7,11,34,57,7,34,-546,47,47,47,90,100,0};
    int a2[9] =  {10,7,50,7,90,100,47,47,47};

    int m = sizeof(a1)/sizeof(a1[0]);
    int n = sizeof(a2)/sizeof(a2[0]);
    int ans[n]; // Declaring the Max size of Resulting  array , by Smaller array as it contains max'm number of elements resulting array can contain
    int elem = 0; // Counting the Length of Resulting Array.
    int curr_elem ;

    for(int i = 0;i<m;i++){
        curr_elem = a1[i];
        bool present = false;
        for(int j = 0;j<n;j++){
            if((curr_elem == a2[j])){
                present = true;
                // ans[elem] = curr_elem;
                // elem++;
                break;
            }
        }if((present == 1) && !(isPresent(ans,elem,curr_elem))){
            ans[elem] = curr_elem;
            elem ++;
        }
    }

    for (int i = 0;i<elem;i++){
        cout<<ans[i]<<" ";
    }
}    