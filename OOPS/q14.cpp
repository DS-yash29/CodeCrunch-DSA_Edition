#include<iostream>
#include <fstream>
using namespace std;

int main(){
    string sam;
    string c;
    ifstream obj("sample.txt");
    string key = "Yash" ;
    int Lines = 0;
    bool found = false;
    while (getline(obj, sam)) {
        Lines++;
        if (sam.find(key) != string::npos)
        {
            found = true;
            obj.close();
        }
    }
    if(found){
        cout<<"String found at line number : "<<Lines<<endl;
    }else{
        cout<<"Not Present.";
    }
}