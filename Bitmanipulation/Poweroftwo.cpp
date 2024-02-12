#include<iostream>
#include<math.h>
using namespace std;

/*
To Check if a number is power of two.
Example : 
        2 -> true
        9 -> false
        128 -> true

*/
bool ispoweroftwo(int n){

    if(n<=0){
        return 0;
    }
    int bits = log2(n);
    int checker = 1<<bits;
    if((checker ^ n) == 0){
        return 1;
    }return 0;
}

int main(){
    int x = cin.get();
    ispoweroftwo(x);
}

/*
    Leetcode Solution
    class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return 0;
        }

        int n_bits = log2(n);
        int check = 1<<n_bits;
        if((check ^ n) == 0){
            return 1;
        }return 0;
        
        
        
    }
};
*/