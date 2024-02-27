#include<iostream>
using namespace std;

int StringLen(char a[],int idx,int l){
    if(a[idx] == '\0'){
        return l;
    }
    return StringLen(a,idx+1,l+1);
}

int main(){
    char s[] = "Yash Matlani";
    cout<<StringLen(s,0,0);
}