#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        prev = next = NULL;
    }
    Node(int n){
        data = n;
        prev = next = NULL;
    }
};

class DLL{
    public:
    Node* head;
    DLL(){
        head->next = head->prev = NULL;
    }
    DLL(int n){
        head = new Node(n);
        head->next = head->prev = NULL;
    }

    void insertelem(int n);
    int getlength();
    void deleteTail();
    void deletehead();
    void deleteBypos(int n);
    void printdll();
};

void DLL::insertelem(int n){
    if(head == NULL) {
        head = new Node(n);
        return ;
    }
    Node * n1 = new Node(n);
    Node* t = head;
    while(head->next){
       head = head->next;
    }
    n1->prev = head;
    head->next = n1;
    head = t;
    return;
}

void DLL ::printdll(){
    if(head == nullptr){
        cout<<"No Data To Display\n";
        return;
    }
    Node* t = head;
    while(t){
        cout<<t->data<<" -> ";
        t = t -> next;
    }
    cout<<"NULL\n";
    return ;
}

int DLL :: getlength() {
    int cnt = 0;
    Node* t = head;
    while(t){
        cnt++;
        t = t->next;
    }
    return cnt;
}

void DLL ::deleteTail() {
    if(head == nullptr) return;
    if(head->next == nullptr) {
        Node* c = head;
        delete c;
        return;
    }
    Node* t = head;
    while(t->next->next){
        t = t->next;
    }

    Node* del = t->next;
    t->next = nullptr;
    del->prev = nullptr;
    delete del;
    return;
}

void DLL::deletehead(){
    if(head == nullptr) return;
    if(head->next == nullptr) {
        Node* c = head;
        delete c;
        return;
    }
    Node* c = head;
    head = head->next;
    head->prev = nullptr;
    delete c;
}

void DLL::deleteBypos(int k){
    int x = this->getlength();
    if(k>x){
        return;
    }
    if(k==1){
        Node* del = head;
        head = head->next;
        head->prev = nullptr;
        delete del;
    }

    int i = 1;
    Node* t = head;
    while(i<k-1){
        i++;
        head = head->next;
    }
    if(k==x){
        Node* temp = head->next;
        head->next = NULL;
        temp->prev = NULL;
        head = t;
        return;
    }
    Node* temp = head->next;
    head->next = temp->next;
    temp->prev = NULL;
    head->next->prev = head;
    head = t;

}

int main(){
   DLL d1(2);
   d1.insertelem(3);
   d1.printdll();
   d1.insertelem(4);
   d1.insertelem(5);
   d1.printdll();
   cout<<d1.getlength()<<endl;
   d1.deleteTail();
   d1.printdll();
   d1.deleteBypos(3);
   d1.printdll();
   
}
