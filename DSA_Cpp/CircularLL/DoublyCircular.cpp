#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int n){
        data = n;
        prev = NULL;
        next = NULL;
    }
};

void isempty(Node* &head){
    if(head == NULL){
        cout<<"Empty Linked List ";
        return ;
    }
    cout<<"Not An Empty Linked List\n";
}

void insertNodes(Node* &head,int n){
    Node* temp = new Node(n);
    if(head == NULL){
        head = temp;
        head->next = head;
        head->prev = head;
        return ;
    }
    if(head->next == head){
        Node* t = head;
        head->next = temp;
        temp->prev = head;
        head->prev = temp;
        temp->next = head;
        return ;
    }
    Node* t = head;
    while(t->next != head->prev){
        t = t->next;
    } 
    temp->prev = t->next;
    t->next = temp;
    temp->next = head;
}

void Print(Node* &head){
    if(head == NULL){
        cout<<"No Data To Display"<<endl;
        return ;
    }
    if(head->next == head){
        cout<<head->data<<endl;
        return ;
    }
    Node* t = head;
    while(t->next != head->prev){
        cout<<t->data<<" ";
        t = t->next;
    }
}
 
int main(){
    Node* head = NULL;
    insertNodes(head,1);
    insertNodes(head,4);
    Print(head);
    
}