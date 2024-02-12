#include<iostream>
using namespace std;

/*
Reversing The Linked List -> 
1->2->3->4->5      ----> 5->4->3->2->1

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

void printLL(Node* head){
    if(head->next == NULL){
        cout<<head->data<<endl;
        return ;
    }
    Node* t = head;
    while(t->next != NULL){
        cout<<t->data<<" ";
        t = t->next;
    }cout<<t->data<<endl;
}

void insertnode(Node* &head,int n){
    Node* temp = new Node(n);
    Node* t = head;
    while(t->next != NULL){
         t = t->next;
    }
    t->next = temp;
}


void reverseLL(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return; 
    }

    Node* b = NULL;
    Node* current = head;
    Node* e = NULL;

    while (current != NULL) {
        e = current->next; 
        current->next = b; 

        b = current;
        current = e;
    }

    head = b; 
}


int main(){
    Node* head = NULL;
    Node* n1 = new Node(78);
    head = n1;
    insertnode(n1,5);
    insertnode(n1,10);
    insertnode(n1,20);
    insertnode(n1,-56);
    cout<<"Linked List Initially"<<endl;
    printLL(n1);
    cout<<"Linked List After Reversal"<<endl;
    reverseLL(n1);
    printLL(n1);
    
}