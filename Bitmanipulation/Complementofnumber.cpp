#include<iostream>
#include<math.h>
using namespace std;

/*
 Given A Number , Return Its Compliment
 Example: 
    5 (101) -> 2(010)
    13 (1101) -> 2(0010)

    Also A Leetcode Problem
    https://leetcode.com/problems/complement-of-base-10-integer/description/
*/

int main(){
    int x  = 11,i=0,sum=0;
    while(x!=0){
        sum = sum + pow(2,i)* (!(x&1));
        x = x>>1;
        i++;
    }
    cout<<sum;
}

/*
    Leetcode Solution
    class Solution {
public:
    int bitwiseComplement(int n) {
        int sum = 0,i=0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            sum = sum + pow(2,i)*(!(n&1));
            n = n>>1;
            i ++;
        }
        return sum;
    }
};

Beats 100%
*/
