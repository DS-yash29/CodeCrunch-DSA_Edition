#include<iostream>
using namespace std;

/*

A Stack is a Linear Data Structure Which Follows The Principle of LIFO/FILO
Element inserted at last will be removed first
Element inserted at first will be removed at last. 

*/

class Stack{
    public:
    int top;
    int* a;
    int size;
    Stack(int s){
        top = -1;
        a = new int[s];
        size = s;
    }

    void push(int n){
        if(top == size-1){
            cout<<"Stack Overflow \n";
            return ;
        }
    top++;
    a[top] = n;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow\n";
            return ;
        }
        cout<<"Popped "<<a[top]<<" from the stack\n";
        top --;

    }

    bool isEmplty(){
        if(top == -1){
            return 0;
        }
        return 1;
    }

    bool isFull(){
        if(top == size-1){
            return 1;
        }return 0;
    }

    int fetchtop(){
        if(top == -1){
            return top;
        }
        return a[top];
    }

    int length(){
        return top+1;
    }

    void traversal(){
        int n = top;
        while(n>=0){
            cout<<a[n]<<" ";
            n--;
        }cout<<endl;
    }


};

int main(){
    Stack s = Stack(5);
    s.pop();
    cout<<s.isEmplty()<<endl;
    cout<<s.length()<<endl;
    for(int i = 1;i<7;i++){
        s.push(i*i);
    }
    s.traversal();
    s.pop();
    cout<<s.fetchtop()<<endl;
    s.traversal();

}