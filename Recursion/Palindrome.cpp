#include<iostream>
using namespace std;

bool isPalindromicString(string s,int i,int j){
   
    if(i>j){
        return true;
    }
    return (s[i]==s[j]) && isPalindromicString(s,i+1,j-1);
}

void transform(char c[] , int s , int e){
    
    for(int i = s;i<e;i++){
        if(c[i]>=65 && c[i]<=90){
            c[i] += 32;
        }
    }
}

int main(){
    char c[] = "PaLIndRome EmordNILaP";
    cout<<sizeof(c)/sizeof(char)<<endl;
    transform(c,0,sizeof(c)/sizeof(char)-1);
    if(isPalindromicString(c,0,sizeof(c)/sizeof(char) -2)){
        cout<<"Palindrome\n";
    }else{
        cout<<"Not Palindrome";
    }
}