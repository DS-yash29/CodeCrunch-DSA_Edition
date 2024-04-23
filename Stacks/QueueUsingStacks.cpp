#include<bits/stdc++.h>
using namespace std;

int getMinways(stack<int> s1,stack<int> s2,int gs,int s,int c){
    if(s>gs) return c;
    if(s1.empty() || s2.empty()) return c;
    int a = s1.top();
    s1.pop();
    int m1 = getMinways(s1,s2,gs,s+a,c+1);
    int b = s2.top();
    s2.pop();
    int m2 = getMinways(s1,s2,gs,s+b,c+1);
    return max(m1,m2);
}


int main(){
    stack<int> s1;
    stack<int> s2;
    s1.push(1);
    s1.push(6);
    s1.push(4);
    s1.push(2);
    s1.push(4);

    s2.push(5);
    s2.push(8);
    s2.push(1);
    s2.push(2);

    int target = 10;
    int c = 0;
    cout<<getMinways(s1,s2,target,0,0);

}