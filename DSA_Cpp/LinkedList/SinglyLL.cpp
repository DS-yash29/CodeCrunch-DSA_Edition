#include<iostream>
using namespace std;

/*
    Implementing A Singly Linked List By Creating a Node Class.
    Functions Such as :
    Insertion at head,middle,tail
*/

// Creation of node class which consists of Data & Address of next node.
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        this ->data=n;
        this->next = NULL;
    }
   

};
// Print A Singly Linked List.
void printLL(Node* Head ){
    while(Head->next != NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }cout<<Head->data;
    cout<<endl;
}

// Inserting a node at head position
void insertathead(Node* &head,int d){
    Node* newnode = new Node(d);
    newnode ->next = head;
    head = newnode;
}

// Inserting a node at last position
void insertattail(Node* &tail,int d){
    Node* temp = new Node(d);
    Node* t = tail;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;
    t = temp;
    
}


void insertAtmiddle(Node* &head,int elem){
    Node* temp = new Node(elem);
    Node* t1 = head;
   
    int n = 0;
    while(t1->next != NULL){
        t1 = t1->next;
        n++ ;
    }
    t1 = head;
    int i= 0;
    while(i<=(n/2)){
        t1 = t1->next;
        i++;
    }
    Node* t2 = t1->next;
    temp->next = t2;
    t1->next= temp;

}

int main(){
    Node* head = NULL;
    Node* n1 = new Node(5);
    head = n1;
    insertathead(n1,0);
    insertattail(n1,10);
    insertattail(n1,20);
    insertAtmiddle(n1,15);
    insertAtmiddle(n1,17.5);
    printLL(n1);
}