#include<iostream>
using namespace std;

/*
    Implementing Doubly Linked Lists
    LL With Double Pointers 
    Previous & Next
*/

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int n){
        this->data=n;
        this->prev=NULL;
        this->next=NULL;
    }
};

// Traversing through the entire LL
void printLL(Node* Head){
    cout<<" \n";
    while(Head != NULL){
        cout<<Head->data<<" ";
        Head = Head-> next;
    }
}

// inserting node at tail
void insertattail(Node* &tail,int n){
    Node* temp = new Node(n);
    Node* t = tail;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;
    temp->prev = t;
}
// Inserting node at head
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

// Deletion at a specific node
int getLL_length(Node* head){
    int i = 1;
    if(head->prev == NULL && head->next == NULL){
        return i;
    }

    while(head->next != NULL){
        i++;
        head = head->next;
    }
    return i;
}

void deletionofnode(Node* &Head,int pos){
    int i = 1;
    Node* t = Head;
    if(pos == 1){
        Head = Head->next;
        delete t;
        return ;
    }
    
    while(i<pos-1){
        t = t->next;
        i++;
    }
    Node* t2 = t->next;
    t->next = t2->next;
    t2->next->prev = t; 
    delete t->next;
}


int main(){
    Node* Head = NULL;
    Node* n1 = new Node(10);   
    insertathead(n1,5);
    insertathead(n1,0);
    insertattail(n1,15);
    insertattail(n1,20);
    cout<<"Doubly LL After Insertion of Elements";
    printLL(n1);
    cout<<"\n\nDoubly Linked List After Deletion of Element At 4th Positions";
    deletionofnode(n1,4);
    printLL(n1);
 
}