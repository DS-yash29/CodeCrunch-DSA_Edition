#include<iostream>
using namespace std;

/*
Implementing Circular Linkedlist
*/

class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

bool checkifempty(Node* &head){
    
    if(head == NULL){
        return 0;
    }
    return 1;
}

int getLength(Node* &tail){
    if(tail == NULL){
        return 0;
    }
    int i = 1;
    if(tail->next == tail){
        return i;
    }
    Node* t = tail->next;
    while(t != tail){
        i++;
        t = t->next;
    }
    return i;
}

void insertnode(Node* &tail,int n){
    Node* temp = new Node(n);
    if(tail == NULL){
        tail = temp;
        tail->next=tail;
        return ;
    }

    if(tail->next == tail){
        Node* t = tail;
        tail->next = temp;
        temp->next = t;
        tail = temp;
        return ;
    }

    Node* t = tail->next;
    tail->next = temp;
    temp->next = t;
    tail = temp;
}

void insertathead(Node* &tail,int m){
    Node* temp = new Node(m);
    Node* t = tail->next;
    temp->next = t;
    tail->next = temp;
    
}

void print(Node* tail){

    if(tail == NULL){
        cout<<"No Data To Display";
        return ;
    }

    if(tail->next == tail){
        cout<<endl<<tail->data;
        return ;
    }
    Node* t = tail->next;
    while(t!=tail){
        cout<<t->data<<" ";
        t = t->next;
    }

}

int main(){
    Node* head = NULL;
    insertnode(head,1);
    insertnode(head,4);
    insertnode(head,9);
    for(int i = 4;i<8;i++){
        insertnode(head,i*i);
    }
    int x = getLength(head);
    cout<<"Printing Linked List By Inserting Elements at Tail"<<endl;
    print(head);
    
}