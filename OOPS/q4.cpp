#include<iostream>
using namespace std;

class child;

class Parent{
    int parent_age;
    public:
    int friend big_age(Parent , child);
    Parent(int age){
        parent_age = age;
    }
};

class child{
    int child_age ;
    public:
    int friend big_age(Parent,child);
    child(int age){
        child_age = age;
    }
};

int big_age(Parent p,child c){
    if(p.parent_age>c.child_age){
        cout<<"Parent age is bigger"<<endl;
        return p.parent_age;
    }
    cout<<"Child Age is Bigger\n";
    return c.child_age;
}

int main(){
    Parent p(53);
    child c(23);
    big_age(p,c);
}