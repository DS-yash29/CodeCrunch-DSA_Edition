#include<iostream>
#include<math.h>
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

Node* middle(singlyLL h){
    Node* fast = h.head;
    Node* slow = h.head;

    while(fast != NULL && slow != NULL){
        fast = fast->ptr;
        if(fast != NULL){
            fast = fast->ptr;
            slow = slow->ptr;
        }
        
    }
    return slow;
}

int main(){
    singlyLL h1(1);
    for(int i = 2;i<=12;i++){
        h1.insertElem(i);
    }
    h1.PrintLL();
    Node* p = middle(h1);
    cout<<p->data<<" ";
}