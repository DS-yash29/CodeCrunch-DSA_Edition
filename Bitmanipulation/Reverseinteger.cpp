#include<iostream>
using namespace std;

/*
    Given an integer xyz
    return zyx;

    Also a leetcode problem -> https://leetcode.com/problems/reverse-integer/description/
*/

int main(){
    int x = 924729,sum = 0;
    while(x!=0){
        sum = sum*10 + (x%10);
        x= x/10;
    }
    cout<<sum;
}

/*
# Solution For Leetcode

class Solution {
public:
    int reverse(int x) {
        long int sum = 0;
        // if(x < -1*(pow(2,31)) || x> (pow(2,31)-1) ){
        //     return sum;
        // }

        while(x!=0){
        sum = 10*sum + (x%10);
        x = x/10;
        };
        if(sum < -1*(pow(2,31)) || sum> (pow(2,31)-1) ){
            return 0;
        }
        return sum;
    }
    
};


*/