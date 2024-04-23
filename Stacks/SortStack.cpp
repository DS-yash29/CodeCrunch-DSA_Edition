#include<bits/stdc++.h>
using namespace std;

/*

    Sort a Given Stack Using Recursion.
    Without any Auxiliary Space.

*/

void printStack(stack<int> s){
    if(s.empty()) cout<<"No Data To Print\n";
    else{
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
        return;
    }
}

void sortedInsert(stack<int> &s,int x){
    if(s.empty() || s.top()<x){
        s.push(x);
        return;
    }
    int a = s.top();
    s.pop();
    sortedInsert(s,x);
    s.push(a);
}


void sortstk(stack<int> &s){
    if(s.empty()){
        return;
    }
    int b = s.top();
    s.pop();
    sortstk(s);
    sortedInsert(s,b);

}


int main(){
    stack<int> s1;
    s1.push(5);
    s1.push(2);
    s1.push(-6);
    s1.push(10);
    s1.push(3);
    printStack(s1);
    sortstk(s1);
    printStack(s1);
}