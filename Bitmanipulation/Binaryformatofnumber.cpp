#include<iostream>
#include<math.h>
using namespace std;

/*
Given A Number , return it's binary format
Example :
          5->101
          7->111
          11->1011

*/

int main(){
    int n = 4,sum = 0, i = 0;
    while(n!=0){
        sum = pow(10,i)*(n&1) + sum;
        n >>= 1;
        i++;
    }
    cout<<sum;
}