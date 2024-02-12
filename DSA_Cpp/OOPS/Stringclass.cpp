#include<iostream>
using namespace std;

const int s = 50;

class String{
    int len;
    char *a;

public:
    String(){len = s; a = new char[len+1];}
    String(const char *p);
    friend String operator + (String &s1, String &s2); 
    void display(); 
    ~String(){
        delete [] a;
    }
};

String::String(const char *p){
    int i = 0;
    while(p[i] != '\0'){ 
        i++;
    }
    len = i;
    a = new char[len+1];
    for(int j = 0;j<len;j++){
        a[j] = p[j];
    }
    a[len] = '\0'; 
}

String operator + (String &s1, String &s2){
    String res;
    res.len = s2.len + s1.len;
    res.a = new char[res.len+1];
    int i;
    for(i = 0; i < s1.len; i++){
        res.a[i] = s1.a[i];
    }
    for(int j = 0; j < s2.len; j++, i++){ 
        res.a[i] = s2.a[j];
    }
    res.a[i] = '\0'; 
    return res;
}

void String::display(){
    for(int i=0; i < this->len; i++){
        cout << this->a[i];
    }
    cout << endl;
}

int main(){
    String s1("Yash");
    String s2("Matlani");
    s2.display();
    s1 = s1 + s2;
    s1.display();
    return 0;
}
