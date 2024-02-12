#include<iostream>
#include<math.h>
using namespace std;

/*
    To Print Decimal Value of a binary format
    1000 -> 8
    1111 -> 15
*/

int main(){
    int input = 111111,sum = 0,i=0;
    while(input  != 0){
        sum = pow(2,i)*(input&1) + sum;
        input = input/10;
        i++;
    }

    cout<<sum;
}