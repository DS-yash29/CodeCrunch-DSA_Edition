#include<bits/stdc++.h>
using namespace std;

bool isOpening(char a){
    if(a == '{' || a == '[' || a == '(') return true;
    return false;
}

bool validParen(string s , stack<char> p){
    for(int i = 0;i<s.length();i++){
        if(isOpening(s[i])){
            p.push(s[i]);
        }
        else{
            if(s[i] == ']'){
                if(p.empty()||p.top()!='[') return false;
            }
            else if(s[i] == '}'){
                if(p.empty() || p.top()!= '{') return false;
            }
            else if(s[i] == ')'){
                if(p.empty() || p.top() != '(') return false;
            }

            p.pop();
        }

    }
    return true;

}

int main(){
    string s = "([](){}})";
    stack<char> paren;
    cout<<validParen(s,paren);
    
}