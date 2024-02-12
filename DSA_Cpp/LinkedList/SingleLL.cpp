#include<iostream>
using namespace std;

/*
A Linked List Consists of Two Parts : Data & Address.
Address Contains the address of the next pointer.

Traversing  Each Node of the linked list
    1->2->3->4
*/

class Node{
    public:
    int data;
    Node* next;
    Node(int n){ // Calling the constructor to pass the data 
        data = n;
        next = NULL;
    }
};

void print(Node* head){
    if(head->next == NULL){ // Meaning if the list contains only single node
    cout<<head->data<<" "<<endl;
     return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }cout<<temp->data;cout<<endl;
}


void insertnode(Node* &head,int n){ // Inserting Elements At Tail
    Node* temp = new Node(n);
    if(head->next == NULL){
        head->next = temp;
        return ;
    }
    Node* t = head;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;

}

int main(){
    Node* head = NULL;
    Node* n1 = new Node(5);
    head = n1;
    cout<<"Printing Linked List With Only 1 Element: "<<endl;
    print(n1);
    insertnode(n1,15);
    insertnode(n1,25);
    insertnode(n1,35);
    cout<<"Traversing Linked List After Inserting Elements"<<endl;
    print(n1);
}

/*

void removeNode(Node* &Head,int pos){
    int i = 1;
    Node* temp = Head;
    if(pos==1){
        Head = Head->next;
        delete temp;
    }else{
    while(i<pos-1){
        temp = temp->next;i++;
    }
    Node* t = temp->next;
    temp->next = t->next;
    t = NULL;}
}
*/