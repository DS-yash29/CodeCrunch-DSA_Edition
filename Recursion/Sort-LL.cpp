#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* ptr;
    Node(int n){
        data = n;
        ptr = NULL;
    }
};

void insertNode(Node* &head,int n){
    Node* n1 = new Node(n);
    if(head==NULL){
        head = n1;
        return;
    }
    if(head->ptr == NULL){
        head->ptr = n1;
        return ;
    }

    Node* t = head;
    while(t->ptr){
        t = t->ptr;
    }
    t->ptr = n1;
}

void printLL(Node* head){
    if(head == NULL){
        cout<<"No Data To Display\n";
        return ;
    }

    while(head){
        cout<<head->data<<" ";
        head = head->ptr;
    }
}

void SortLL(Node* &head,Node* t){
    if(t->ptr == NULL){
        return ;
    }
    Node* j = t;
    int min = j->data;
    Node* temp = j;
    while(j){
        if(j->data < min){
            min = j->data;
            temp = j;
        }
        j = j->ptr;
    }
    if(t->data>min){
        temp->data = t->data;
        t->data = min;
    }
    SortLL(head,t->ptr);
}

int main(){
    Node* head = NULL;
    printLL(head);
    insertNode(head,3);
    insertNode(head,0);
    for(int i = 1;i<=16;i+=i){
        insertNode(head,i);
    }
    insertNode(head,-8);
    insertNode(head,-25);
    insertNode(head,5);
    printLL(head);
    SortLL(head,head);
    cout<<endl;
    printLL(head);
}