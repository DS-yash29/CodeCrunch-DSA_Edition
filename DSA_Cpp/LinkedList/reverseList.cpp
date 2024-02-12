#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    
    node(int d) {
        data = d;
        next = nullptr;
    }
};

void insertNode(node* &head, int n) {
    node* node1 = new node(n);
    if (head == nullptr) {
        head = node1;
        return;
    }
    if (head->next == nullptr) {
        head->next = node1;
        return;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = node1;
}
void traverse(node* &head) {
    if (head == nullptr) {
        return;
    }

    node* temp = head;
    while (temp!= nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }cout<<endl;
}
void reverseList(node* &head){
    node* curr = head;
    node* p = nullptr;
    node* a = nullptr;

    while(curr->next != nullptr){
        a = curr->next;
        curr->next = p;
        p = curr;
        curr = a;
    }   head = p;
}

int main(){
    node* head = nullptr;
    insertNode(head,1);
    int i = 2;
    while(i<7){
        insertNode(head,i);
        i++;
    }
    traverse(head);
    reverseList(head);
    traverse(head);
}