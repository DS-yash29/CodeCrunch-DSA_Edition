#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string sam,sam2;
    int lines=0;
    int chars=0;
    int words = 0;
    ifstream in("sample.txt");
    while(getline(in,sam2)){
        lines++;
        for(int i = 0;i<sam2.length();i++){
            if(sam2[i] == ' '){
                ++words;
            }++chars;
        }
    }  
    cout<<"No of Lines: "<<lines<<endl;
    cout<<"No of Chars: "<<chars<<endl;
    cout<<"No of Words: "<<words<<endl;
}