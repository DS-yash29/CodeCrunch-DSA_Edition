#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int n){
        data=n;
        prev=NULL;
        next=NULL;
    }
};

void insertion(Node* &tail,int n){ // Inserting Elements in Doubly LL At Last Pos.
    
    Node* temp = new Node(n);
    Node* t = tail;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;
    temp->prev = t;
}

void printLL(Node* Head){// To Traverse Doubly LL
    cout<<"\n";
    Node* t = Head;
    while(t->next != NULL){
        cout<<t->data<<" ";
        t = t-> next;
    } cout<<t->data;
 
}

void insertathead(Node* &Head,int n){
    Node* temp = new Node(n);
    temp->next = Head;
    Head->prev = temp;
    Head = temp;
}

// inserting at a specific position

void insertatpos(Node* &Head,int pos,int n){
    Node* temp = new Node(n);
    if(pos == 1){
        insertathead(temp,n);
        return ;
    }
    Node* t = Head;
    int i = 1;
    while(i<pos-1){
        t = t->next;
        i++;
    }
    t->next->prev = temp;
    temp->prev = t;
    temp->next = t->next;
    t->next=temp;

}

int main(){
    Node* head = NULL;
    Node* n1 = new Node(1);
    head = n1;
    cout<<"Doubly Linked List After Inserting a Single Node";
    printLL(n1);
    cout<<endl;
    for(int i = 2;i<7;i++){
        insertion(n1,i*i);
    }
    cout<<"\nDoubly Linked list After Insertion of Elements At Tail"<<" ";
    printLL(n1);
    cout<<"\n \nDoubly Linked list After Insertion of Elements At Kth Positions"<<" ";
    insertatpos(n1,3,7);
    insertathead(n1,0);
    printLL(n1);

}