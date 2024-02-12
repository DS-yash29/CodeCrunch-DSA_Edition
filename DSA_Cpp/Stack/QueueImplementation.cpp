#include<iostream>
using namespace std;

class Queue{
    public :
    int size;
    int* a;
    int idx;
    Queue(int s){
        size = s;
        a = new int[size];
        idx = 0;
        
    }

    void push(int n){
        if(idx == size){
            cout<<"Queue Overflow\n";
            return;
        }
        a[idx] = n;
        idx++;
    }

    void pop(){
        if(idx == 0){
            cout<<"\nQueue Underflow\n";
            return;
        }
        int i = 0;
        while(i<idx){
            int temp = a[i+1];
            a[i] = temp;
            i++;
        }
        idx--;
        return;

    }

    void traverse(){
        int i = 0;
        cout<<endl;
        while(i<length()){
            cout<<a[i]<<" ";
            i++;
        }
    }

    bool empty(){
        if(idx == 0){
            return 1;
        }
        return 0;
    }

    int length(){
        return idx;
    }

    void traverse_reverse(){
        if(idx == 0){
            return ;
        }
        idx--;
        cout<<a[idx]<<" ";
        traverse_reverse(); 
    }
};

int main(){
    Queue q1 = Queue(5);
    cout<<q1.length();
    q1.pop();
    q1.push(1);
    q1.push(4);
    q1.push(9);
    q1.pop();
    q1.push(27);
    q1.push(29);
    q1.pop();
    q1.traverse();
    q1.push(4);
    q1.traverse_reverse();
}
