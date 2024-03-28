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
    void reverseLL();
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

 
void singlyLL ::  reverseLL(){
    Node* curr = this->head;
    Node* prev = NULL;
    Node* n = NULL;
    while(curr!=NULL){
        n = curr->ptr;
        curr->ptr = prev;
        prev = curr;
        curr = n;
    }
    this->head = prev;
    return;
}

int main(){
    int x;
    cout<<"Enter The Number\n";
    cin>>x;
    singlyLL head(x%2);
    x = x>>1;
    
    while(x!=0){
      int elem = x%2;
      head.insertElem(elem);
      x = x>>1;
    }
    head.reverseLL();
    head.PrintLL();
}