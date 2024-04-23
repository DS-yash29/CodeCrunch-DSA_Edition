#include<iostream>
using namespace std;

class stack{
    int size;
    int idx;
    int *arr;
    public:
    stack(int size){
        this->size = size;
        this->idx = 0;
        arr = new int[size];
    }
    void push(int n);
    void pop();
    int top();
    bool isEmpty();
    int length();
};

void stack :: push(int n){
    if(this->idx < this->size){
            *(arr + idx) = n;
            idx++;
        }
        else{
            cout<<"Stack Overflow\n";
            return;
        }
}

void stack :: pop(){
    if(this->idx>0){
        this->idx--;
    }
    else{
        cout<<"Stack Underflow\n";
        return;
    }
}

int stack ::length(){
    return this->idx;
}

bool stack ::isEmpty(){
    if(this->idx) return true;
    return false;
}

int stack :: top(){
    return this->arr[idx-1];
}

int main(){
    stack s(5);
    for(int i = 1;i<=5;i++){
        s.push(i);
    }
    cout<<s.length()<<endl;
    cout<<s.top()<<endl;
    for(int i = 0;i<1;i++) s.pop();
    cout<<s.top()<<" "<<s.length()<<endl;

}