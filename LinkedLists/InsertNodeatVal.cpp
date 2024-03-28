/*
You are given the 'head' of a singly linked list with unique integer elements.
Also, two integers 'x' and 'val' are provided.

Your task is to insert a node with value 'x' immediately 
before the node with value 'val' in the linked list.

It is guaranteed that the given value exists in the Linked Lists

*/


#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node* ptr;
    Node(){
        ptr = NULL;
    }
    Node(int n){
        data = n;
        ptr = NULL;
    }
};

class singlyLL{
    public:
    Node* head;
    singlyLL(int n){
        head = new Node(n);
    }
    void insertElem(int n);
    void PrintLL();
    void reverseLL();
    bool cycle();
    int lengthofCycle();
    void insertNodeAtVal(int val,int x);
};

void singlyLL :: insertElem(int n){
    Node* temp = new Node(n);
    if(head == NULL){
        head = temp;
        return;
    }
    if(head->ptr == NULL){
        head->ptr = temp;
        return;
    }

    Node* t = head;
    while(t->ptr != NULL){
        t = t->ptr;
    }
    t->ptr = temp;
}
void singlyLL::PrintLL() {
    if (head == NULL) {
        cout << "No Data To Display" << endl;
        return;
    }

    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->ptr;
    }
    cout << endl;
}

void singlyLL::insertNodeAtVal(int x,int val){
    Node* h = this->head;
    if(h->data == val){
        Node* temp = new Node(x);
        temp->ptr = this->head;
        this->head = temp;
        return;
    }
    while(this->head->ptr->data != val){
        this->head = this->head->ptr;
    }

    if(this->head->ptr != NULL){
        Node* temp = this->head->ptr;
        this->head->ptr = new Node(x);
        this->head->ptr->ptr = temp;
    }
    else{
        this->head->ptr = new Node(x);
    }
    this->head = h;
}

int main(){
    singlyLL l1(1);
    for(int i = 2;i<7;i++){
        if(i==5) continue;
        l1.insertElem(i);
    }
    l1.PrintLL();
    l1.insertNodeAtVal(5,6);
    l1.PrintLL();
    l1.insertNodeAtVal(0,1);
    l1.PrintLL();
}