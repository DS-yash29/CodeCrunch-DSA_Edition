#include<iostream>
using namespace std;

/*
1->3->2->0
0->1->2->3
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


void sortLL(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return; 
    }

    Node* t1 = head;

    while (t1 != NULL) {
        Node* t2 = t1->next;
        while (t2 != NULL) {
            if (t1->data > t2->data) {
                int temp = t1->data;
                t1->data = t2->data;
                t2->data = temp;
            }
            t2 = t2->next;
        }
        t1 = t1->next;
    }
}


int main(){
    Node* head = NULL;
    Node* n1 = new Node(78);
    head = n1;
    insertnode(n1,5);
    insertnode(n1,10);
    insertnode(n1,20);
    insertnode(n1,-56);
    cout<<"Linked List Before Sorted"<<endl;
    printLL(n1);
    cout<<"Linked List After Sorted "<<endl;
    sortLL(n1);
    printLL(n1);
}