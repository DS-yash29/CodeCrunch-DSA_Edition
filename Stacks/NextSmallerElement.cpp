#include<bits/stdc++.h>
using namespace std;

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


void getMin(stack<int> s1,int n,int &m){
    if(s1.empty()){
        if(m == INT_MAX) m = -1;
        return;
    }
    int a = s1.top();
    s1.pop();
    if(a<n){
        m = min(a,m);
    }
    getMin(s1,n,m);
    s1.push(a);
}

int main(){
    vector<int> a ;
    a = {2,1,5,3,4};
    stack<int> s1;
    for(int i = 0;i<a.size()-1;i++){
        s1.push(a[a.size()-i-1]);
    }
    vector<int> res;
    for(int i = 0;i<a.size();i++){
        int m = INT_MAX;
        getMin(s1,a[i],m);
        res.push_back(m);
        s1.pop();
    }

    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    for(int i = 0;i<a.size();i++){
        cout<<res[i]<<" ";
    }

}



