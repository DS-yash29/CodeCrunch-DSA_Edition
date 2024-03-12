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
    int getLength();
    void deleteByPos(int pos);
    void PrintLL();
    void SortLL();
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

int singlyLL:: getLength(){
    if(head == NULL){
        return 0;
    }
    if(head->ptr == NULL){
        return 1;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp = temp->ptr;
    }
    return cnt;
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

void singlyLL::deleteByPos(int pos) {
    if (head == NULL || pos <= 0) {
        return;
    }
    if (pos == 1) {
        Node* temp = this->head;
        this->head = this->head->ptr;
        delete temp;
        return;
    }
    int x = this->getLength();
    if (pos > x) {
        cout << "Enter Valid Position";
        return;
    }
    int i = 0;
    Node* t = this->head;
    while (i < pos - 1) {
        t = t->ptr;
        i++;
    }
    Node* temp = t->ptr;
    t->ptr = t->ptr->ptr;
    delete temp;
}
void singlyLL::SortLL(){
    int x = this->getLength();
    if(x<=1 || head == NULL){
        return ;
    }
    Node* t1 = this->head;
    int i = 1;
    while(i<x-1){
        Node* t2 = t1->ptr;
        Node * t3 = t2;
        int min =  t2->data;
        while(t2){
            if(t2->data < min){
                min = t2->data;
                t3 = t2;
            }
            t2 = t2->ptr;
        }
        if(t1->data>min){
            t3->data = t1->data;
            t1->data = min;
        }
        t1 = t1->ptr;
        i++;
    }
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
    Node* head;
    singlyLL l1(1);
    l1.insertElem(2);
    l1.insertElem(3);
    l1.insertElem(5);
    l1.insertElem(8);
    l1.insertElem(-7);
    l1.PrintLL();    
    l1.reverseLL();
    l1.PrintLL();
    l1.SortLL();
    l1.PrintLL();
}