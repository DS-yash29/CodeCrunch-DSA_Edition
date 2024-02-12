#include<iostream>
using namespace std;

/*
Deleteing A Node of a Linked List of a Desired Position.
Head,Middle,Tail
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

void deleteNode(Node* &head,int pos){
    Node* curr = head;
    if(pos == 1){
        head = curr->next;
        delete curr;
        return ;
    }

    int i = 1;
    while(i<pos-1){
        curr = curr->next;
        i++;
    }
    Node* td = curr->next;
    curr->next = td->next;
    delete td;
}

void deletetail(Node* &head){
    Node*t = head;
    int i = 1;
    while(t->next != NULL){
        t = t->next;
        i++;
    }
    deleteNode(head,i);
}

void insertnode(Node* &head,int n){ // Inserting Node at the tail of the LL.
    Node* temp = new Node(n);
    Node* t = head;
    while(t->next != NULL){
         t = t->next;
    }
    t->next = temp;
}

int main(){
    Node* head = NULL;
    Node* n1 = new Node(1);
    printLL(n1);
    cout<<"Linked List After Inserting Nodes: "<<endl;
    insertnode(n1,4);
    insertnode(n1,9);
    insertnode(n1,16);
    insertnode(n1,25);
    insertnode(n1,36);
    insertnode(n1,49);
    printLL(n1);
    cout<<"Linked List After Deleting Head"<<endl;
    deleteNode(n1,1);
    printLL(n1);
    cout<<"Linked List After Deleting Middle Node"<<endl;
    deleteNode(n1,3);
    printLL(n1);
    cout<<"Linked List After Deleting Tail"<<endl;
    deletetail(n1);
    printLL(n1);

}