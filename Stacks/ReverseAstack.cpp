#include<bits/stdc++.h>
using namespace std;


void pushAtBottom(stack<int> &s,int x){
    if(s.empty()) {
        s.push(x);
        return;
    }
    int a = s.top();
    s.pop();
    pushAtBottom(s,x);
    s.push(a);
}

void reverseStack(stack<int> &s){
    if(s.empty()) return;
    int a = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s,a);
}

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

int main(){
    stack<int> s1;
    for(int i = 0;i<5;i++){
        s1.push(i+1);
    }
    printStack(s1);
    reverseStack(s1);
    printStack(s1);

}